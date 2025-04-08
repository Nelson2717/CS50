from flask import Flask, render_template, request

app = Flask(__name__)

SPORTS = [
    "Basketball",
    "Baseball",
    "Soccer",
    "Tennis",
]

REGISTRANTS = {}

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

    REGISTRANTS[name] = sport

    return render_template("success.html")


@app.route("/registrants")
def registrants():
    return render_template("registrants.html", registrants=REGISTRANTS)