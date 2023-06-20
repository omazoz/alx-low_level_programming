#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int length, i;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; src[i] != '\0'; i++, length++)
{
dest[length] = src[i];
}
dest[length] = '\0';
return (dest);
}

