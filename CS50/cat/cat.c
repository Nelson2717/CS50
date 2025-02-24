//
//  cat.c
//  CS50
//
//  Created by Nelson Cruz on 2/24/25.
//

#include <stdio.h>
#include "cs50.h"

void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}
