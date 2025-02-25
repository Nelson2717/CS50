//
//  calculator.c
//  CS50
//
//  Created by Nelson Cruz on 2/24/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int dollars = 1;
    while (true)
    {
        char c = get_char("Here's $%i. Double it and gice it to the next person? ", dollars);
        if (c == 'y')
        {
            //dollars = dollars * 2;
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
    printf("Here's $%i.\n", dollars);
}
