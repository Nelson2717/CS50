#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
}
// This code declares a string and prints it.
// The string is stored in read-only memory, so it cannot be modified.
// Attempting to modify it would result in a segmentation fault.
// The string is stored in the data segment of the program's memory.
// The string is not stored on the stack or heap.
