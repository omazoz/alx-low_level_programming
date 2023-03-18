#include <stdio.h>

/**
 * main - Prints cmbnumb  between 012 to 789.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, l;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; l < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b  != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}