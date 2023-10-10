#include "search_algos.h"

/**
 * print_arr - function to print the content of the array
 * @array: the array to print
 * @left: the index to start from
 * @right: the index of the last item to be print
*/

void print_arr(int *array, size_t left, size_t right)
{
	if (left <= right)
	{
		printf("Searching in array: %d", array[left]);
		left++;
	}
	while (left <= right)
	{
		printf(", %d", array[left]);
		left++;
	}
	printf("\n");
}
/**
 * binary_search - Function that uses the binary search algorithm
 *                 to search for a value in a data set
 * @array: the data set
 * @size: the size of the array
 * @value: the value to be searched in the array
 * Return: the index of the value found, Otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t mid, right, left;

	if (!size || !array)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		print_arr(array, left, right);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}