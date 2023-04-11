#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
char *char1;
unsigned int i;

if (size == 0)
return (NULL);

char1 = malloc(sizeof(c) * size);

if (char1 == NULL)
return (NULL);

for (i = 0; i < size; i++)
char1[i] = c;

return (char1);
}
