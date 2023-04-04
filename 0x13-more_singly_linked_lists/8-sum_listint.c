#include "lists.h"

/**
 * sum_listint - calc the sum of all the data in a listint_t list
 * @head: 1st node in a linked list
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
