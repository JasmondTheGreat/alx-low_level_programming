#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: pointer to head pointer
 * @str: string param
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return new_node;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	curr = *head;

	while (curr->next != NULL)
	{
		printf("%s\n", curr->str);
		curr = curr->next;
	}

	curr->next = new_node;

	return (new_node);
}
