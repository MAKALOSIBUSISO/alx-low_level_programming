#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
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
	int track_node;

	for (track_node = 0; h != NULL; track_node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (track_node);
}