#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int d;
	char *c;

	d = 1;
	c = (char *) &d;

	return ((int)*c);
}
