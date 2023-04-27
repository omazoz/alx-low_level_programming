#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *curre;

	while ((curre = head) != NULL)
	{
		head = head->next;
		free(curre->str);
		free(curre);
	}
}
