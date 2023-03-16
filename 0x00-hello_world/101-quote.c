#include<stdio.h>
#include<unistd.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(str);
fwrite(str, sizeof(char), len, stdout);
return (1);
}
