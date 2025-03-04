//
//  compare v2.c
//  CS50
//
//  Created by Nelson Cruz on 3/4/25.
//

#include <stdio.h>
#include "cs50.h"
#include "string.h"

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    
    printf("%p\n", s);
    printf("%p\n", t);
}
