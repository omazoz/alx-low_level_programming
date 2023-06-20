#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s1: initial segment.
 * @s2: s2ed bytes.
 * Return: the number of s2ed bytes.
 */
unsigned int _strspn(char *s1, char *s2)
{
unsigned int i, j, bool;

for (i = 0; *(s1 + i) != '\0'; i++)
{
bool = 1;
for (j = 0; *(s2 + j) != '\0'; j++)
{
if (*(s1 + i) == *(s2 + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (i);
}
