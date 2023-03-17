#include <stdio.h>

/**
 * main - Entry point
 * lets play what I call the alphabet game
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		putchar(a++);
	putchar('\n');
	return (0);
}
