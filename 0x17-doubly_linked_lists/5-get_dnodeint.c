#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head: list
 * @index: index of element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;

	for (len = 0; len < index && head->next; len++)
	{
		head = head->next;
	}
	if (len < index)
		return (NULL);
	return (head);
}
