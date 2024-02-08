#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head pointer to linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp)
	{
		count++;
		printf("%d\n", temp->n);

		temp = temp->next;
	}

	return (count);
}
