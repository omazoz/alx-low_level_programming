#include "main.h"

/**
 * print_alphabet - alphabet function
 *
 **/
void print_alphabet(void)
{
int i = 0;
char str[26] = "abcdefghijklmnopqrstuvwxyz";

while (i < 26)
_putchar(str[i++]);
_putchar('\n');
}
