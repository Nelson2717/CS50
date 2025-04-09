import sqlite3
from flask import Flask, render_template, request

app = Flask(__name__)

# Properly connect to SQLite database
db = sqlite3.connect("froshims.db", check_same_thread=False)
db.execute("CREATE TABLE IF NOT EXISTS registrants (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT NOT NULL, sport TEXT NOT NULL)")
db.commit()

SPORTS = [
    "Basketball",
    "Baseball",
    "Soccer",
    "Tennis",
]

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Name is required.")
    
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Sport is required.")
    if sport not in SPORTS:
        return render_template("error.html", message="Invalid sport selected.")

    db.execute("INSERT INTO registrants (name, sport) VALUES (?, ?)", (name, sport))
    db.commit()

    return render_template("success.html")

@app.route("/registrants")
def registrants():
    cursor = db.execute("SELECT * FROM registrants")
    registrants = cursor.fetchall()
    return render_template("registrants.html", registrants=registrants)
