#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char s[100];
    printf("s: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(t);
    return 0;
}
// This program prompts the user for a string, copies it to a dynamically allocated memory, and capitalizes the first letter of the copied string.
// It uses the fgets function to read the string and strcspn to remove the newline character from the input.
// The program demonstrates how to handle string input and output in C, as well as how to work with dynamic memory allocation using malloc and free.
// The program is a simple example of how to use standard input and output functions in C to read and manipulate strings.
// It also shows how to use the toupper function to capitalize the first letter of a string and how to safely copy strings using strcpy.
// The program is a simple demonstration of how to handle string input and output in C, as well as how to work with dynamic memory allocation. It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn and toupper.
// The program also includes error handling for memory allocation using malloc, which is important for ensuring that the program runs correctly and does not crash due to memory issues.