#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char number[20];
} person;

int main(void)
{
    person people[3];

    strcpy(people[0].name, "David");
    strcpy(people[0].number, "+1-617-495-100");

    strcpy(people[1].name, "John");
    strcpy(people[1].number, "+1-949-468-2750");

    strcpy(people[2].name, "Yulia");
    strcpy(people[2].number, "+1-617-495-100");

    char name[50];
    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}

/// This program demonstrates how to use a struct to store information about people, including their names and phone numbers.
/// It uses an array of structs to store multiple people's information and allows the user to search for a person's phone number by name.
/// The program uses the fgets function to read a line of input from the user and stores it in a character array.
/// It also uses the strcmp function to compare strings and the strcspn function to remove the newline character from the input.
/// The program is a simple example of how to use structs and arrays in C to store and manipulate data.
/// It also shows how to use the fgets function to read strings safely and how to manipulate strings using functions like strcspn and strcmp.
/// The program is a simple demonstration of how to use structs and arrays in C to store and manipulate data.
