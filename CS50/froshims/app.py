import sqlite3
from flask import Flask, render_template, request, g

app = Flask(__name__)
DATABASE = "froshims.db"

SPORTS = [
    "Basketball",
    "Baseball",
    "Soccer",
    "Tennis",
]

def get_db():
    if "db" not in g:
        g.db = sqlite3.connect(DATABASE)
        g.db.row_factory = sqlite3.Row  # return rows as dictionaries
    return g.db

@app.teardown_appcontext
def close_db(exception):
    db = g.pop("db", None)
    if db is not None:
        db.close()

@app.before_request
def setup_db():
    db = get_db()
    db.execute(
        "CREATE TABLE IF NOT EXISTS registrants (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT NOT NULL, sport TEXT NOT NULL)"
    )
    db.commit()

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")

    if not name:
        return render_template("error.html", message="Name is required.")
    if not sport:
        return render_template("error.html", message="Sport is required.")
    if sport not in SPORTS:
        return render_template("error.html", message="Invalid sport selected.")

    db = get_db()
    db.execute("INSERT INTO registrants (name, sport) VALUES (?, ?)", (name, sport))
    db.commit()

    return render_template("success.html")

@app.route("/registrants")
def registrants():
    db = get_db()
    registrants = db.execute("SELECT name, sport FROM registrants").fetchall()
    return render_template("registrants.html", registrants=registrants)