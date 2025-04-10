#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    fgets(s, sizeof(s), stdin);

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");

    return 0;
}
