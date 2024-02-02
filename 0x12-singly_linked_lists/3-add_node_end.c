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
	list_t *new_node = malloc(sizeof(list_t)), *curr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);

	while(curr != NULL)
	{
		if (curr->next == NULL)
			curr->next = new_node;
	}

	curr = curr->next;


	return (new_node);
}
