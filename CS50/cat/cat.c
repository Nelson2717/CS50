//
//  cat.c
//  CS50
//
//  Created by Nelson Cruz on 2/24/25.
//

#include <stdio.h>
#include "cs50.h"

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
    
}
