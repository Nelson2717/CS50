//
//  length.c
//  CS50
//
//  Created by Nelson Cruz on 2/26/25.
//

#include <stdio.h>
#include "cs50.h"

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
