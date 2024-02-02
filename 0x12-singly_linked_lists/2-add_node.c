#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head double pointer
 * @str: string param
 *
 * Return: new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (strdup(str))
		new_node->str = strdup(str);

	new_node->len = strlen(new_node->str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
