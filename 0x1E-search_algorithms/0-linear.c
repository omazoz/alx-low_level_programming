#include "search_algos.h"
/**
 * linear_search - function that uses linear search algorithm
 *                 to find a specific value in a data set
 * @array: the data set to search in
 * @size: size of the array
 * @value: the value to be found in the array
 * Return: the index of the value found, Otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
