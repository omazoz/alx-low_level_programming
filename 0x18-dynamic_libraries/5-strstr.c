#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * str2 in the string str1.
 * @str1: entire string.
 * @str2: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *str1, char *str2)
{
char *bstr1;
char *pstr2;

while (*str1 != '\0')
{
bstr1 = str1;
pstr2 = str2;

while (*str1 != '\0' && *pstr2 != '\0' && *str1 == *pstr2)
{
str1++;
pstr2++;
}
if (!*pstr2)
return (bstr1);
str1 = bstr1 + 1;
}
return (0);
}
