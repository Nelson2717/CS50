//
//  compare.c
//  CS50
//
//  Created by Nelson Cruz on 2/21/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");
    
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
