#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *
 * @head: double pointer to the head node
 * n: data part
 *
 * Return: address of new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr = *head;
    listint_t *node_end = malloc(sizeof(listint_t));

    node_end->n = n;
    node_end->next = NULL;

    if (*head == NULL)
        return (NULL);
    if (node_end == NULL)
    {
        return (NULL);
        *head = node_end;
    }


    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = node_end;

    return (node_end);
}
