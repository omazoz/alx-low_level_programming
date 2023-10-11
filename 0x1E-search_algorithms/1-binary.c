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
	size_t mid, right_, left_;

	if (!size || !array)
		return (-1);
	left_ = 0;
	right_ = size - 1;
	while (left_ <= right_)
	{
		mid = (left_ + right_) / 2;
		print_arr(array, left_, right_);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right_ = mid - 1;
		else
			left_ = mid + 1;
	}
	return (-1);
}
