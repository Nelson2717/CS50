#include <stdio.h>

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int times = get_positive_int();
    meow(times);
    return 0;
}

int get_positive_int(void)
{
    int n;
    do
    {
        printf("Number: ");
        scanf("%d", &n);
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
// This code prompts the user for a positive integer and prints "meow" that many times.
// It uses a function called get_positive_int to handle the input and another function called meow to print the output.
// The get_positive_int function uses a do-while loop to ensure that the user enters a positive integer, and it keeps prompting until a valid input is received.
// The meow function uses a for loop to print "meow" the specified number of times.
// This is a simple example of how to use functions, loops, and conditional statements in C to create a program that interacts with the user and produces output based on their input.
// The program demonstrates how to handle user input and output in C, as well as how to use functions to organize code and make it more modular.
// The program is a simple demonstration of how to use functions, loops, and conditional statements in C to create a program that interacts with the user and produces output based on their input. It also shows how to use standard input functions like scanf to read user input and how to use loops to repeat actions based on that input.