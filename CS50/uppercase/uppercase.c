//
//  uppercase.c
//  CS50
//
//  Created by Nelson Cruz on 2/26/25.
//

#include <stdio.h>
#include "cs50.h"
#include "string.h"
#include "ctype.h"

int main(void)
{
    string s = get_string("Before: ");
    printf("After  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Change s[i] to uppercase.
            printf("%c", toupper(s[i]));
        }
        else
        {
            // Just print s[i].
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
