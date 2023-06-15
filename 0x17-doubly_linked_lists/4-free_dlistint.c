#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a list
 * @head: list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check_is;

	start = head;
	while (start != NULL)
	{
		check_is = start->next;
		free(start);
		start = check_is;
	}
}
