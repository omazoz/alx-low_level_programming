#include <stdio.h>

/**
* main - Entry point
* lets print numbers
* Return: 0 (SUCCESS)
*/

int main(void)
{
int i;
i = '0';
while (i <= '9')
{
putchar(i++);
}
putchar('\n');
return (0);
}
