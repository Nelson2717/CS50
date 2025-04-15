#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    printf("%.70f\n", (float) x / y);
    return 0;
}
// This code prompts the user for two integers and prints their division as a float with 70 decimal places.
// It uses the standard input function scanf to read the integers and then performs the division.
// The result is printed using the printf function with a format specifier that allows for a high precision output.
// The program demonstrates how to handle user input and output in C, as well as how to perform basic arithmetic operations.
// The program is a simple example of how to use standard input and output functions in C to perform arithmetic operations and display results with high precision.
// It also shows how to use type casting to ensure the division is performed as a float, which is important for getting a precise result when dividing integers.