#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }

    printf("hello, %s\n", argv[1]);
    return 0;
}

// This program demonstrates how to use command-line arguments in C.
// It checks if the correct number of arguments is provided and prints a greeting message with the name provided as an argument.
// The program uses the argc and argv parameters of the main function to access command-line arguments.
// It also includes error handling for missing command-line arguments, which is important for ensuring that the program runs correctly and does not crash due to incorrect input.
// The program is a simple example of how to use command-line arguments in C to pass information to a program at runtime.