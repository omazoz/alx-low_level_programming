#include "main.h"
/**
 * _islower - function that check if c is lowecase ot not
 * Return: 0 as value if c is not a LOWERCASE none zero if it is
 * @c: is an input
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
