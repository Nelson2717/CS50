#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Input: ");
    fgets(s, sizeof(s), stdin);

    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}