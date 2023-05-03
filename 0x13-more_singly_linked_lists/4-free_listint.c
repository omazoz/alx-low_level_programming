#include "lists.h"

/**
 * free_listint - frees a linked list
 * @h: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *h)
{
	listint_t *tmp;

	while ((tmp = h) != NULL)
	{
		h = h->next;
		free(tmp);
	}
}
