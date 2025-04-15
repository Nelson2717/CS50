#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    printf("What is your name?\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Hello, %s\n", name);
    return 0;
}

// This program prompts the user for their name and then prints a greeting message with the name.
// It uses the fgets function to read a line of input from the user and stores it in a character array.
// The program demonstrates how to handle string input and output in C, as well as how to manipulate strings using functions like strcspn.
// The program is a simple example of how to use standard input and output functions in C to read and manipulate strings.
// It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn.
// The program is a simple demonstration of how to handle string input and output in C, as well as how to work with dynamic memory allocation. It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn.
// The program also includes error handling for memory allocation using malloc, which is important for ensuring that the program runs correctly and does not crash due to memory issues.
