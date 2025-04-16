#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

// This program prompts the user for a height and then draws a right-aligned triangle of that height using the '#' character.
// It uses recursion to print the correct number of '#' characters for each row, and it demonstrates how to use functions in C.
// The program is a simple example of how to use recursion and functions in C to create a pattern of characters.