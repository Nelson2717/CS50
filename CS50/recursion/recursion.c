//
//  recursion.c
//  CS50
//
//  Created by Nelson Cruz on 2/28/25.
//

#include <stdio.h>
#include "cs50.h"

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    
    draw(n - 1);
    
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
