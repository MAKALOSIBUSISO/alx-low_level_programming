#include "lists.h"

/**
 * dlint_len - returns the number of elements in a double linked list
 *
 * @h: The head of the list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
