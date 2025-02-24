//
//  mario.c
//  CS50
//
//  Created by Nelson Cruz on 2/21/25.
//

#include <stdio.h>
#include "cs50.h"

void print_row(int n);

int main(void)
{
    const int n = 3;
    
    // Print n rows
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}

void print_row(int n)
{
    for (int i =0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
