import sqlite3
from flask import Flask, render_template, request
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
