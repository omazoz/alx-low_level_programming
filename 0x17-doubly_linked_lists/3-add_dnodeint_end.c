#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add element at the end of the list
 * @head: list
 * @n: element in list
 * Return: new element/NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_new, *_start;

	_start = *head;
	_new = malloc(sizeof(dlistint_t));
	if (_new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		_new->next = NULL;
		_new->n = n;
		_new->prev = NULL;
		*head = _new;
		return (_new);
	}
	while (_start->next)
	{
		_start = _start->next;
	}
	_start->next = _new;
	_new->prev = _start;
	_new->next = NULL;
	_new->n = n;
	return (_new);
}
