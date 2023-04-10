#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i, j;
int sum;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int arg_len = strlen(argv[i]);
for (j = 0; j < arg_len; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
else if (isdigit(argv[i][j]) < 0)
{
printf("Error\n");
return (1);
}
}
}
for (i = 0; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
