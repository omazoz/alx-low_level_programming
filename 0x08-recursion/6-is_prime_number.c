#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @a: input number.
 * @b: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int a, unsigned int b)
{
if (a % b == 0)
{
if (a == b)
return (1);
else
return (0);
}
return (0 + is_prime(a, b + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (is_prime(n, 2));
}
