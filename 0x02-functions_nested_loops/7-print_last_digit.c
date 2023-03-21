#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int n)
{
int last_digit;
if (n == INT_MIN)
{
last_digit = 8;
_putchar(last_digit + '0');
return (last_digit);
}
if (n < 0)
n = -n;
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
