import sqlite3
from flask import Flask, render_template, request, session, redirect
from flask_session import Session

app = Flask(__name__)

db = sqlite3.connect("store.db", check_same_thread=False)
db.row_factory = sqlite3.Row  # Return rows as dicts

app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

@app.route("/")
def index():
    books = db.execute("SELECT * FROM books").fetchall()
    return render_template("books.html", books=books)


@app.route("/cart", methods=["GET", "POST"])
def cart():
    if "cart" not in session:
        session["cart"] = []

    if request.method == "POST":
        book_id = request.form.get("book_id")
        if book_id:
            session["cart"].append(book_id)
            session.modified = True
        return redirect("/cart")

    if not session["cart"]:
        return render_template("cart.html", books=[])

    placeholders = ','.join('?' for _ in session["cart"])
    query = f"SELECT * FROM books WHERE id IN ({placeholders})"
    books = db.execute(query, session["cart"]).fetchall()
    return render_template("cart.html", books=books)
