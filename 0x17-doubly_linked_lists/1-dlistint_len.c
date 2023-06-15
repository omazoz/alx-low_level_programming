#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: struct list
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int index = 0;

	for (index = 0; h; index++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
