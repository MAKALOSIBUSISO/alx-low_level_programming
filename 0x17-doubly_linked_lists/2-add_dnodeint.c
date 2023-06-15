#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 *
 * Description: Doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Integer to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    // Allocate memory for the new node
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    // Set the value of the new node
    new_node->n = n;
    new_node->prev = NULL;

    // If the list is empty, set the new node as the head
    if (*head == NULL)
    {
        new_node->next = NULL;
        *head = new_node;
    }
    else
    {
        // Set the new node as the head and link it to the previous head
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
    }

    return new_node;
}
