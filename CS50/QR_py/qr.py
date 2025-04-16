import os
import qrcode

img = qrcode.make("https://youtu.be/xvFZjo5PgG0")

img.save("qr.png", "PNG")

# This code generates a QR code for the given URL and saves it as a PNG file.
# It uses the qrcode library to create the QR code image.
# The make function generates the QR code based on the provided URL.
# The save method saves the generated QR code image to a file named "qr.png" in PNG format.
# The code is a simple demonstration of how to create and save QR codes using Python.