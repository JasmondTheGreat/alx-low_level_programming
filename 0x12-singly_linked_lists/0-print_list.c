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
	size_t count = 0;

	while (h)
	{
		count++;
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}

	return (count);
}
