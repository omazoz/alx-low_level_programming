#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @h: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && h != NULL; i++)
	{
		h = h->next;
	}

	return (h);
}
