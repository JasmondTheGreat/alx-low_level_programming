#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in the nodes
 *
 * @head: head pointer
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr;

	if (head == NULL)
		return (0);

	for (sum = 0, curr = head; curr != NULL; sum += curr->n, curr = curr->next)
		;

	return (sum);
}
