//
//  cat.c
//  CS50
//
//  Created by Nelson Cruz on 2/24/25.
//

#include <stdio.h>
#include "cs50.h"

void meow(int n);

int main(void)
{
    int n = get_int("Number: ");
    meow(n);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
    
}
