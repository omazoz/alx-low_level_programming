#include "main.h"
#include <string.h>
/**
 * _strchr - locate a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
	s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
