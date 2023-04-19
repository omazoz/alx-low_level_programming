#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @comp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first eement for which the comp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*comp)(int))
{
int i;

if (array && comp)
{
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
if (comp(array[i]))
return (i);
}

return (-1);
}
