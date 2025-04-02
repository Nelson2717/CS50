from flask import Flask

app = Flask(__name__)


@app.route("/")
def index():
    return '<!DOCTYPE html><html lang="en"><head><title>hello, title</title></head><body>hello, body</body></html>'