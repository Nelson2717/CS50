#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    fgets(s, sizeof(s), stdin);

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");

    return 0;
}

// This program demonstrates how to read a string from the user and convert it to uppercase.
// It uses the fgets function to read a line of input from the user and stores it in a character array.
// The program then uses a for loop to iterate through each character of the string and convert it to uppercase using the toupper function.
// Finally, it prints the uppercase string using the printf function.
// The program is a simple example of how to use standard input and output functions in C to read and manipulate strings.