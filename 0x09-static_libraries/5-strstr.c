#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: points to the string in which to search
 * @needle: points to the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (*needle == '\0')
	{
	return (haystack);
	}

	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = p1;
		p3 = needle;
		while (*p2 != '\0' && *p3 != '\0' && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (*p3 == '\0')
		{
			return (p1);
		}
	}

	return (NULL);
}
