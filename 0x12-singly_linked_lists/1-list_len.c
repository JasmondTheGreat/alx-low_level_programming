#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: head pointer to linked list
 *
 * Return: num of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
