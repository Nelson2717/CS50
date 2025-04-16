#include <stdio.h>
#include "stdlib.h"

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}

/// This program demonstrates how to use dynamic memory allocation in C using the malloc function.
/// It allocates memory for an array of integers, assigns values to the array, and then frees the allocated memory.
/// The program is a simple example of how to use dynamic memory allocation in C, as well as how to use the malloc and free functions.
/// It also shows how to use the sizeof operator to determine the size of a data type in bytes.
/// The program is a simple demonstration of how to use dynamic memory allocation in C, as well as how to work with pointers and arrays.
/// It also shows how to use the malloc function to allocate memory dynamically and how to use the free function to deallocate memory.