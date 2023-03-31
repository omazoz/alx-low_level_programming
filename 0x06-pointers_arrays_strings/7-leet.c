#include "main.h"
/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
char a[] = "aeotlAEOTL";
char n[] = "4307143071";
int i = 0;
int j;
while (*(s + i) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(s + i) == a[j])
{
*(s + i) = n[j];
}
}
i++;
}
return (s);
}

