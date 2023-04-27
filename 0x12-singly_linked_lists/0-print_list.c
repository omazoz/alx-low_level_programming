#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @list: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *list)
{
	size_t num;

	num = 0;
	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", list->len, list->str);
		list = list->next;
		num++;
	}
	return (num);
}
