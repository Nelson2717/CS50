//
//  string.c
//  CS50
//
//  Created by Nelson Cruz on 2/26/25.
//

#include <stdio.h>
#include "cs50.h"
#include "string.h"

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
