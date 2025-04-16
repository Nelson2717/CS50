try:
    n = int(input("Input: "))
except ValueError:
    print("Not an integer.")
else:
    print("Integer.")

# This code prompts the user for input and checks if the input is an integer.
# If the input is not an integer, it prints "Not an integer."
# If the input is an integer, it prints "Integer."
# The code uses a try-except block to handle the ValueError that occurs when
# the input cannot be converted to an integer.
# The code is a simple demonstration of error handling in Python.