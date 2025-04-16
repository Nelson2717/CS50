#include <stdio.h>
#include <stdlib.h>

// Implements a sorted linked list of numbers

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        printf("Number: ");
        scanf("%d", &n->number);
        n->next = NULL;

        // If list is empty
        if (list == NULL)
        {
            list = n;
        }
        // If number belongs at beginning of list
        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }
        // If number belongs later in list
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // Print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // Free memory
    while (list != NULL)
    {
        node *tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}

// This program implements a sorted linked list of numbers in C.
// It uses a struct to define the node of the linked list, which contains an integer number and a pointer to the next node.
// The program prompts the user to enter three numbers, which are then inserted into the linked list in sorted order.
// It uses a loop to traverse the list and find the correct position for each new number.
// The program also includes error handling for memory allocation using malloc, which is important for ensuring that the program runs correctly and does not crash due to memory issues.
// After all numbers have been entered, the program prints the numbers in sorted order.
// Finally, it frees the memory allocated for the linked list nodes to prevent memory leaks.
// The program is a simple demonstration of how to use linked lists in C to store and manipulate data.
// It also shows how to use dynamic memory allocation with malloc and how to free memory using free.