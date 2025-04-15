#include <stdio.h>

int main(void)
{
    int x, y;
    printf("What's x? ");
    scanf("%d", &x);

    printf("What's y? ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

    return 0;
}
// This code prompts the user for two integers and compares them, printing the result of the comparison.