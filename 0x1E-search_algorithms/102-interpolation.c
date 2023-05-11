#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using ISA
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of value, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (array[low] != array[high])
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		if (value > array[pos])
		{
			high = pos - 1;
		}
		else
			return (pos);

	}

	if (array[low] == value)
		return (low);

	return (-1);
}
