#include <stdio.h>

int main(void)
{
    char c;
    printf("Do you agree? ");
    scanf(" %c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}
// This program prompts the user for a character input and checks if it is 'y' or 'Y' for yes, or 'n' or 'N' for no. It then prints a message based on the input.
// The program uses a simple if-else statement to check the input and print the corresponding message. It also includes a space before %c in scanf to ignore any leading whitespace characters.
// The program is a simple example of how to use conditional statements in C to handle user input and provide feedback based on that input.