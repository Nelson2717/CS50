#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int length = strlen(name);
    printf("%i\n", length);
    return 0;
}