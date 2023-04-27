#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @list: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *list)
{
	size_t number;

	number = 0;
	while (list != NULL)
	{
		list = list->next;
		number++;
	}
	return (number);
}
