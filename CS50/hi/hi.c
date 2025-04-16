#include <stdio.h>

int main(void)
{
    char *words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);

    return 0;
}
// This program demonstrates how to use character arrays to store and manipulate strings in C.
// It uses a two-dimensional array of characters to store two strings, "HI!" and "BYE!", and then prints each character of the strings using indexing.
// The program also shows how to use the printf function to format and print strings in C.
// The program is a simple example of how to use character arrays to store and manipulate strings in C, as well as how to use the printf function to format and print strings.
// It also demonstrates how to use indexing to access individual characters in a string and how to use the printf function to format and print strings in C.