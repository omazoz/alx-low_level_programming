#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *tmp;

	(void)tmp;

	New = malloc(sizeof(listint_t));

	if (New == NULL)
		return (NULL);

	New->n = n;
	New->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = New;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = New;
	}

	return (*head);
}
