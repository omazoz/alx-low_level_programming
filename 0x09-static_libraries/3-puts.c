#include <stdio.h>

/**
 * _puts - prints a string followed by a new line, to stdout
 * @str: string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
