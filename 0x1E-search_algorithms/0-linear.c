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
    size_t index = 0;

    if (!size || !array)
        return (-1);
    while (index < size)
    {
        if (array[index] == value)
            return (index);
        index++;
    }
    return (-1);
}





