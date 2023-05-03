#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @h: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **h)
{
	listint_t *tmp;
	listint_t *current;

	if (h != NULL)
	{
		current = *h;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*h = NULL;
	}
}
