#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: head pointer of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		if (curr->str)
			printf("[%d] %s\n", curr->len, curr->str);
		else
			printf("[0] (nil)\n");

		curr = curr->next;
	}

	return (count);
}
