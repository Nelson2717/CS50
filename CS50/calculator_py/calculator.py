x = int(input("x: "))
y = int(input("y: "))

z = x / y

print(f"{z:.100f}")

# This code is a simple calculator program that takes two integer inputs from the user, x and y.
# It then performs a division operation (x / y) and prints the result with 100 decimal places.
# The result is formatted using an f-string with the precision specifier .100f,
# which ensures that the output displays 100 digits after the decimal point.
# This is useful for demonstrating high precision in floating-point calculations.
# However, be cautious with very large or very small numbers,
# as they may lead to floating-point inaccuracies or overflow errors.
# The program does not handle division by zero, which would raise a ZeroDivisionError.
# To improve the program, you could add error handling for invalid inputs and division by zero.