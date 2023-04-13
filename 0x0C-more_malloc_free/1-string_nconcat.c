#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 * Return: new string followed by the first @n bytes
 * of string 2 @s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int k, m, i, j;
char *str;

/*treat NULL as empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

k = m = 0;
/*length of both s1 & s2 respectively*/
while (s1[k] != '\0')
k++;
while (s2[m] != '\0')
m++;
/*set n to length of s2*/
if (n >= m)
n = m;

str = (char *) malloc((k + n + 1) * sizeof(char));
if (str == NULL)
return (NULL);

/*add s1 to str*/
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
/*add s2 n bytes to str*/
for (j = 0; j < n && s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
