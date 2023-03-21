#include "main.h"
/**
 * main - Entry point
 * lets print _putchar
 * Return: 0 (SUCCESS)
 */

int main(void)
{
int i = 0;
char str[8] = "_putchar";

while (i < 8)
_putchar(str[i++]);
_putchar('\n');
return (0);
}
