#include <stdio.h>

/**
 * main - Entry point
 * lets write the alphabets with the while loop
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;
	char b;

	a = '0';
	b = 'a';
	while (a <= '9')
		putchar(a++);
	while (b <= 'f')
		putchar(b++);
	putchar('\n');
	return (0);
}
