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

