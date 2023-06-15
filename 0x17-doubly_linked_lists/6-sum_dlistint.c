#include "lists.h"

/**
 * sum_dlistint - sum of elements in list
 * @head: list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
