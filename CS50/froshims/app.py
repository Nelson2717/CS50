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

# This code defines a Flask web application that allows users to register for sports activities.
# It uses SQLite as the database to store registrant information.
# The application has several routes:
# 1. The root route ("/") displays a registration form with a list of sports.
# 2. The "/register" route handles the form submission, validates the input,
#    and inserts the registrant's name and selected sport into the database.
# 3. The "/registrants" route retrieves and displays all registered participants.
# The application uses Flask's `g` object to manage the database connection,
# ensuring that it is created and closed properly.
# The database schema is created if it doesn't exist, and the application
# handles errors gracefully by rendering an error template when needed.
# The application is useful for managing sports registrations and displaying
# a list of participants.
# The use of SQLite allows for easy data storage and retrieval,
# while Flask provides a simple framework for building web applications.