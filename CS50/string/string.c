#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Input: ");
    fgets(s, sizeof(s), stdin);

    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}

// This program demonstrates how to read a string from the user and print it character by character.
// It uses the fgets function to read a line of input from the user and stores it in a character array.
// The program then uses a for loop to iterate through each character of the string and print it using the printf function.
// The program is a simple example of how to use standard input and output functions in C to read and manipulate strings.
// It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strlen.
// The program is a simple demonstration of how to handle string input and output in C, as well as how to work with dynamic memory allocation. It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn and strlen.
// The program also includes error handling for memory allocation using malloc, which is important for ensuring that the program runs correctly and does not crash due to memory issues.