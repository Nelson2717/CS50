import csv

name = input("Name: ")
number = input("Number: ")

with open("phonebook.csv", "a") as file:

    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})

# This code appends a new entry to a CSV file named "phonebook.csv".
# It prompts the user for a name and a number, and then writes these values
# as a new row in the CSV file.
# The code uses the csv module to handle CSV file operations.
# The DictWriter class is used to write dictionaries to the CSV file,
# where the keys of the dictionary correspond to the column names in the CSV file.
# The code is a simple demonstration of how to append data to a CSV file in Python.