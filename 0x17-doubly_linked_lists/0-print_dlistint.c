#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/* Define the structure for the doubly linked list */
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
