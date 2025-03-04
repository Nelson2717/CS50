//
//  compare v2.c
//  CS50
//
//  Created by Nelson Cruz on 3/4/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");
    
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
