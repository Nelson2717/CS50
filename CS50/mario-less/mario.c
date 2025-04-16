#include <stdio.h>

void print_row(int n);

int main(void)
{
    const int n = 3;

    // Print n rows
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

// This program prints a right-aligned triangle of '#' characters.
// It uses a function to print each row of the triangle, and it demonstrates how to use loops and functions in C.
// The program is a simple example of how to use loops and functions in C to create a pattern of characters.
// It also shows how to use the printf function to format and print strings in C, as well as how to use nested loops to create a pattern of characters.