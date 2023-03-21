#include "main.h"
/**
 * main - Entry point
 * lets print alphabets  by _putchar
 * return nothing
 */

void print_alphabet(void)
{
int i = 0;
char str[27] = "abcdefghijklmnopqrstuvwxyz";

while (i < 28)
_putchar(str[i++]);
}
