#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *
 * @head: head pointer
 *
 * Return: sum of all the data (n) in a linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	if (head == NULL)
		return (0);

	/*
	for (curr = head; curr != NULL; curr = curr->next)
		sum += curr->n;
		*/
	while (curr != NULL)
	{
		sum += curr->n;

		if (curr->next != NULL)
			curr = curr->next;
		else
			break;
	}

	return (sum);
}
