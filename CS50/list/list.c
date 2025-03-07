//
//  list.c
//  CS50
//
//  Created by Nelson Cruz on 3/7/25.
//

#include <stdio.h>

int main(void)
{
    int list[3];
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}
