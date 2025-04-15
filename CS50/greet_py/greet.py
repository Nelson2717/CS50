from sys import argv

if len(argv) == 2:
    print(f"hello, {argv[1]}")
else:
    print("hello, world")

# This code is a simple program that takes a command-line argument and prints a greeting message.
# It uses the `sys` module to access command-line arguments.
# If the user provides exactly one argument, it prints "hello, <argument>";
# otherwise, it prints "hello, world".
# This program is useful for demonstrating how to handle command-line arguments in Python.
