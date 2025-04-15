s = input("Do you agree? ")

t = s.lower()

if t in ["y", "yes"]:
    print("Agreed.")
elif t in ["n", "no"]:
    print("Not agreed.")

# This code is a simple program that asks the user if they agree with something.
# It takes the user's input and converts it to lowercase to handle different cases.
# Depending on the input, it prints either "Agreed." or "Not agreed."
# The program uses a list to check if the input matches either "y" or "yes" for agreement,
# and "n" or "no" for disagreement.
# The program is case-insensitive, meaning it will accept "Y", "YES", "N", and "NO" as valid inputs.