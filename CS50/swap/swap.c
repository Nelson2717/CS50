#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// This program demonstrates how to swap the values of two integers using pointers.
// It uses a function to perform the swap and demonstrates how to use pointers to manipulate variables in C.
// The program is a simple example of how to use pointers and functions in C to perform operations on variables.