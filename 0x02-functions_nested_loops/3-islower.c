#include "main.h"

/**
 * _islower - find lower caracter
 *
 * @c: the charactere to check
 *
 * Return: 1 if true.
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
