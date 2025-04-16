scores = []

for i in range(3):
    score = int(input("Score:"))
    scores += [score]

average = sum(scores) / len(scores)

print(f"Average: {average}")

# This code prompts the user for three integer scores, stores them in a list,
# calculates the average of those scores, and prints the average.
# The code uses a for loop to collect the scores and the sum function to calculate the average.
# The code is a simple demonstration of list manipulation and arithmetic operations in Python.