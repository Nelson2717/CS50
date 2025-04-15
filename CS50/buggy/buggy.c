#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h;
    printf("Height: ");
    scanf("%d", &h);  // Replaces get_int from cs50.h
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}