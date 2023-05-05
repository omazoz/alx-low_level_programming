#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int n;

	if (n == 0 && index < 64)
		return (0);

	for (n = 0; n <= 63; n >>= 1, n++)
	{
		if (index == n)
		{
			return (n & 1);
		}
	}

	return (-1);
}
