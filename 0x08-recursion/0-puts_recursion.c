#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @str: string
 * Return: no return.
 */
void _puts_recursion(char *str)
{
if (*str != '\0')
{
_putchar(*str);
_puts_recursion(str + 1);
}
else
_putchar('\n');
}
