#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);
    draw(height);
    return 0;
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
// This program prompts the user for a height and then draws a right-aligned triangle of that height using the '#' character.
// It uses nested loops to print the correct number of '#' characters for each row, and it demonstrates how to use functions in C.
// The program is a simple example of how to use loops and functions in C to create a pattern of characters.
// It also shows how to use the printf function to format and print strings in C, as well as how to use nested loops to create a pattern of characters.
// The program is a simple demonstration of how to use loops and functions in C to create a pattern of characters.