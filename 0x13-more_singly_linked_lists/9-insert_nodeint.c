#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: double head pointer
 * @idx: index to place new node
 * @n: integer data for new node
 *
 * Return: address of new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr, *curr2, *temp;
	size_t index_count = 0, num_nodes = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	for (curr2 = *head; curr2 != NULL; curr = curr->next, num_nodes++)
		;
	if ((size_t)n > (size_t)num_nodes)
		return (NULL);

	curr = *head;
	while (curr != NULL)
	{
		if ((size_t)idx - (size_t)index_count == 1)
			temp = curr;

		if ((size_t)index_count != (size_t)idx)
			curr = curr->next;

		index_count++;
	}

	new_node->next = curr;
	temp->next = new_node;

	return (new_node);
}

