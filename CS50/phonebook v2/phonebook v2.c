//
//  phonebook v2.c
//  CS50
//
//  Created by Nelson Cruz on 3/5/25.
//

#include <stdio.h>
#include "cs50.h"
#include "string.h"

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    
    fprintf(file, "%s,%s\n", name, number);
    
    fclose(file);
}
