#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    char t[100];

    printf("s: ");
    fgets(s, sizeof(s), stdin);

    printf("t: ");
    fgets(t, sizeof(t), stdin);

    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    printf("%p\n", (void *)s);
    printf("%p\n", (void *)t);
}
// This program prompts the user for two strings and prints their memory addresses.
// It uses the fgets function to read the strings and strcspn to remove the newline character from the input.
// The program demonstrates how to handle string input and output in C, as well as how to work with memory addresses.
// The program is a simple example of how to use standard input and output functions in C to read and print strings.
// It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn.
// The program is a simple demonstration of how to handle string input and output in C, as well as how to work with memory addresses. It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn.