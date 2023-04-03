#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees is a linked list
 * @head: listint_t list to be freed
 *
 * Return: NULL if it fials
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
