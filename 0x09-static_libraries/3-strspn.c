#include "main.h"

/**
 * _strspn - locates a character in a string
 * @s: is a pointer to the string to be searched
 * @accept: is a pointer to a string containing the characters to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
		return (i);
		}
	}
	return (i);
}
