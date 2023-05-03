#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @h: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *head;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	h_node = current->n;

	head = current->next;

	free(current);

	*head = head;

	return (h_node);
}
