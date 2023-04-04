#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @s2: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in s2, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *s2)
{
unsigned int i, j;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(s2 + j) != '\0'; j++)
{
if (*(s + i) == *(s2 + j))
return (s + i);
}
}
return ('\0');
}
