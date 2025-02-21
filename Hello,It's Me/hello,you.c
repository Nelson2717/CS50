//
//  hello,you.c
//  CS50
//
//  Created by Nelson Cruz on 2/21/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("Hello, %s\n", name);
}
