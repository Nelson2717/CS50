import sys

if len(sys.argv) != 2:
    print("Missing command-line argument")
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)

# To improve the program, you could add error handling for invalid inputs,
# such as checking if the command-line argument is a valid string or handling cases where
# the user does not provide any arguments.
# You could also consider adding options for case-insensitive comparisons or ignoring whitespace.
# Additionally, you could implement a loop to allow the user to compare multiple pairs of strings
# without restarting the program each time.
