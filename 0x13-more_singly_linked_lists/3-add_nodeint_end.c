#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the linked list
 *
 * @head: first node pointer
 * @n: data part
 *
 * Return: the address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	last_node->n = n;
	last_node->next = NULL;

	if (ptr == NULL || last_node == NULL)
		return (NULL);

	while (ptr->next != NULL)
		ptr->next = last_node;

	ptr->next = last_node;

	return (last_node);
}
