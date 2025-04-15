#include <stdio.h>
#include "stdlib.h"

int main(void)
{
    char *s = malloc(100 * sizeof(char));
    if (s == NULL)
    {
        return 1;
    }
    
    printf("s: ");
    scanf("%99s", s);
    printf("s: %s\n", s);
    
    free(s);
    return 0;
}
// This code allocates memory for a string, reads a string from the user, and then prints it.
