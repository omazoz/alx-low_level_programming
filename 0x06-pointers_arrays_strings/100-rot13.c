#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @str: pointer to the string.
 * Return: @str
 */
char *rot13(char *str)
{
int i;

i = 0;
while (str[i])
{
while ((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
{
if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
str[i] -= 13;
break;
}
str[i] += 13;
i++;
}
i++;
}
return (str);
}
