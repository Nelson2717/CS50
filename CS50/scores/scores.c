//
//  scores.c
//  CS50
//
//  Created by Nelson Cruz on 2/26/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    
    // Print average.
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
