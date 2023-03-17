#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * check if  is greater than 5 or
 * less than 6 and not 0
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("Last digit of ");
if ((n % 10) == 0)
printf("%d is 0 and is 0", n);
else if ((n % 10) > 5)
printf("%d is %d and is greater than 5", n, (n % 10));
else
printf("%d is %d and is less than 6 and not 0", n, (n % 10));

printf("\n");
return (0);
}
