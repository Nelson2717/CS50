//
//  memory.c
//  CS50
//
//  Created by Nelson Cruz on 3/4/25.
//

#include <stdio.h>
#include "stdlib.h"

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
}
