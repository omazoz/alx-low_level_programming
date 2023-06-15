#include <stdio.h>
/**
 * main - find palindrome of largest product of two 3-digit numbers
 * Return: Always 1
 */
int main(void)
{
	int product, max = 0, i, j, c = 0;
	int numDigits = 6;
	int d[6] = { 0 };

	for (i = 999; i > 100; i--)
	{
		for (j = 999; j > 100; j--)
		{
			product = i * j;
			c = 0;
			d[0] = d[1] = d[2] = d[3] = d[4] = d[5] = 0;
			while (product)
			{
				d[c] = product % 10;
				product /= 10;
				c++;
			}
			product = i * j;
			numDigits = c;
			if (numDigits == 6)
			{
				if ((d[0] == d[5]) &&
				    (d[1] == d[4]) &&
				    (d[2] == d[3]))
					if (product > max)
						max = product;
			}
			else if (numDigits == 5)
			{
				if ((d[0] == d[4]) &&
				    (d[1] == d[3]))
					if (product > max)
						max = product;
			}
		}
	}
	printf("%d\n", max);
	return (1);
}
