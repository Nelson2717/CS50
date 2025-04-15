#include <stdio.h>

int main(void)
{
    int x, y;
    printf("What's x? ");
    scanf("%d", &x);

    printf("What's y? ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

    return 0;
}
// This code prompts the user for two integers and compares them, printing the result of the comparison.
// It uses the standard input function scanf to read the integers and then uses if-else statements to compare them.
// The program demonstrates how to handle user input and output in C, as well as how to use conditional statements to make decisions based on that input.
// The program is a simple example of how to use standard input and output functions in C to perform comparisons and display results based on user input.
// It also shows how to use if-else statements to handle different conditions and provide feedback based on the comparison results.
// The program is a simple demonstration of how to use conditional statements in C to handle user input and provide feedback based on that input. It also shows how to use standard input functions like scanf to read user input and how to use if-else statements to compare values and print results based on those comparisons.