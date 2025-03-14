//
//  list.c
//  CS50
//
//  Created by Nelson Cruz on 3/7/25.
//

/*
#include <stdio.h>
#include "stdlib.h"
#include "cs50.h"

// Implements a sorted linked list of numbers

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    //Memory for numbers
    node *list = NULL;
    
    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = get_int("Number: ");
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
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at end of list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }
                
                // If in middle of list
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
}
*/