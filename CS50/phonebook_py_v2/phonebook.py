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