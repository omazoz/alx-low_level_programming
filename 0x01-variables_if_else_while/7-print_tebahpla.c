#include <stdio.h>

/**
 * main - Entry point
 * lets write the alphabets with the while loop
 * Return: 0 (SUCCESS)
 */

int main(void)
{
char z;
z = 'z';
while (z >= 'a')
{
putchar(z);
z--;
}
putchar('\n');
return (0);
}
