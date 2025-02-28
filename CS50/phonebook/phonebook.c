//
//  phonebook.c
//  CS50
//
//  Created by Nelson Cruz on 2/27/25.
//

#include <stdio.h>
#include "cs50.h"
#include "string.h"

int main(void)
{
    string names[] = {"David", "John", "Yulia"};
    string numbers [] = {"+1-617-495-100", "+1-949-468-2750", "+1-617-495-100"};
    
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
