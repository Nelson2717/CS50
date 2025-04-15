import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {}
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1


for favorite in sorted(counts, key=counts.get, reverse=True):
    print(f"{favorite}: {counts[favorite]}") 

# The code reads a CSV file named "favorites.csv" and counts the occurrences of each programming language
# listed in the "language" column. It uses the `csv` module to read the file and
# creates a dictionary `counts` to store the counts of each language.
# The code iterates through each row of the CSV file, updating the count for each language.
# Finally, it prints the languages sorted by their counts in descending order.
# This is useful for analyzing the popularity of programming languages based on user preferences.
# The program demonstrates how to read CSV files, use dictionaries for counting,
# and sort data in Python.