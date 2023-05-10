#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using LSA
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of number if found, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	while (index < size)
	{
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
