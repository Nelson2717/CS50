#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char name[100];
    char number[100];

    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // remove newline

    printf("Number: ");
    fgets(number, sizeof(number), stdin);
    number[strcspn(number, "\n")] = 0;

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}

// This program demonstrates how to use file I/O in C to write data to a CSV file.
// It uses the fopen function to open a file in append mode, allowing the user to add new entries to the file.
// The program prompts the user for a name and a number, and then writes that information to the file in CSV format.
// It uses the fprintf function to format the output and write it to the file.
// The program also includes error handling for file opening using fopen, which is important for ensuring that the program runs correctly and does not crash due to file issues.
// The program is a simple example of how to use file I/O in C to read and write data to files.
