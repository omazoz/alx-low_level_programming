#include <stdio.h>

/**
 * main - Entry point
 * while loop to print numbers from 0 to 9
 * with printing (,)
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a++);
		if (a <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
