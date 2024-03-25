#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: double head pointer
 * @n: integer param
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));

	for (last_node = *head; last_node != NULL; last_node = last_node->next)
		if (last_node->next == NULL)
			break;

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
