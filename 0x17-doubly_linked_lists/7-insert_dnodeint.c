#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_dnode - creates new node
 * @n: data of node
 * @prev: link to prev node
 * @next: link to next node
 * Return: pointer to new node
 */
dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of doubly-linked list
 * @idx: index for insertion of new node
 * @n: data for new node
 * Return: address of new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *prev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0) /* insert at list beginning*/
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL); /*first node*/
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (current = *h; current && (count < idx); current = current->next, count++)
	{
		prev = current;
	}
	if ((count == idx) && (current == NULL))
	{
		prev->next = create_dnode(n, prev, NULL);
		return (prev->next);
	}
	if ((count < idx) && (current == NULL))/* check if idx too high*/
		return (NULL);
	if (prev != NULL)
	{       /*inserting in middle of list*/
		prev->next = create_dnode(n, prev, current);
		current->prev = prev->next;
		return (prev->next);
	}
	return (NULL); /*should never run*/
}
