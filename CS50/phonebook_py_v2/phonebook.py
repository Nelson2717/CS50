people = {
    "Maria": "+1-617-495-1000",
    "Sofia": "+1-617-495-1001",
    "Lauren": "+1-617-495-1002",
}

name = input("name: ")

if name in people:
    print(f"Number: {people[name]}")
else:
    print("Not found")

# This code checks if a given name is in a predefined dictionary of names and phone numbers.
# It prompts the user for a name and checks if that name is in the dictionary.
# If the name is found, it prints the corresponding phone number; otherwise, it prints "Not found."
# The code is a simple demonstration of dictionary membership testing in Python.