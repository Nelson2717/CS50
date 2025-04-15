from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE language = ?", favorite)
row = rows[0]

print(row["n"])

# This code connects to a SQLite database named "favorites.db" using the CS50 library.
# It prompts the user to input their favorite programming language and then queries the database
# to count how many times that language appears in the "favorites" table.
# The query uses a parameterized SQL statement to prevent SQL injection attacks.
# The result is stored in the variable `rows`, which is a list of dictionaries.
# The first dictionary in the list is accessed using `rows[0]`, and the count is printed.
# This is useful for tracking user preferences and analyzing the popularity of programming languages.
# The program demonstrates how to interact with a SQLite database using the CS50 library,
# execute SQL queries, and handle user input in Python.