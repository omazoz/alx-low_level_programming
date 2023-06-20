#include <unistd.h>

/**
* main - Entry point
* lets print a character
* Return: 1 (SUCCESS)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
