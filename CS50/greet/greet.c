//
//  greet.c
//  CS50
//
//  Created by Nelson Cruz on 2/26/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
