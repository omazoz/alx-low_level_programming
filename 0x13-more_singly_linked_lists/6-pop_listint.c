#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @h: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **h)
{
	int h_node;
	listint_t *h;
	listint_t *current;

	if (*h == NULL) 
		return (0);

	current = *h;

	h_node = current->n;

	h = current->next;

	free(current);

	*h = h;

	return (h_node);
}
