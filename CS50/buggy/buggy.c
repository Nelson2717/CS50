#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h;
    printf("Height: ");
    scanf("%d", &h);  // Replaces get_int from cs50.h
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
// This program prompts the user for a height and prints a column of hashes (#) of that height. It uses a function called print_column to handle the printing.
// The main function gets the height from the user using scanf and then calls print_column with that height.
// The print_column function uses a for loop to print the specified number of hashes, each on a new line. This is a simple example of how to use functions and loops in C to create a specific output based on user input.
// The program is a simple demonstration of how to use functions and loops in C to create a specific output based on user input. It also shows how to replace the cs50.h library's get_int function with standard C input functions like scanf.