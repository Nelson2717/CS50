//
//  length.c
//  CS50
//
//  Created by Nelson Cruz on 2/26/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string name = get_string("Name: ");
    
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
