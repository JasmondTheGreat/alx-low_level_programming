#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: double head pointer
 * @n: number to add
 *
 * Return: address of new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *curr;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);


	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (curr = *head; curr->next != NULL; curr = curr->next)
		;

	curr->next = new_node;

	return (new_node);
}
