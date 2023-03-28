#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char password[65];
int i, sum, diff;

srand(time(NULL));

for (i = 0, sum = 0; sum < (2772 - 122); i++)
{
password[i] = rand() % 94 + 33;
sum += password[i];
}
diff = 2772 - sum;
password[i] = diff;
password[i + 1] = '\0';

printf("%s", password);

return (0);
}
