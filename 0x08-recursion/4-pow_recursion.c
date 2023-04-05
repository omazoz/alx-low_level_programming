#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @i: base.
 * @j: exponent.
 * Return: value of the exponentiation.
 */
int _pow_recursion(int i, int j)
{
if (j < 0)
return (-1);
else if (j == 0)
return (1);
else
return (i * _pow_recursion(i, j - 1));
}
