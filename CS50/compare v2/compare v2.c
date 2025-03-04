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
    string s = get_int("s: ");
    string t = get_int("t: ");
    
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
