#include <stdlib.h>
#include "lists.h"

/**
 * listint_t - adds a new node at the beginning of a "listint_t" list
 * Return: the address of the new element, or "NULL" if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
