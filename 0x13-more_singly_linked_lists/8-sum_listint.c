#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @h: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *h)
{
	int sum;

	sum = 0;
	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
