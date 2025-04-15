#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    printf("%.70f\n", (float) x / y);
    return 0;
}
// // This code prompts the user for two integers and prints their division as a float with 70 decimal places.