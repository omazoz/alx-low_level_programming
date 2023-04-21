/*
 * File: 1-print_numbers.c
 * Auth: Tolulope Fakunle
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int index;

va_start(valist, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(valist, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(valist);
}
