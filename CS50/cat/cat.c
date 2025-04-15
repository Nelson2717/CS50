#include <stdio.h>

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int times = get_positive_int();
    meow(times);
    return 0;
}

int get_positive_int(void)
{
    int n;
    do
    {
        printf("Number: ");
        scanf("%d", &n);
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
// This code prompts the user for a positive integer and prints "meow" that many times.