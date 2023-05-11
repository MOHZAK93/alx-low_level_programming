#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using JSA
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t lb = 0, ub = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);

	while (ub < size && array[ub] < value)
	{
		lb = ub;
		ub += step;
		printf("Value checked array[%lu] = [%d]\n", lb, array[lb]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", lb, ub);

	while (lb <= ub && ub < size)
	{
		printf("Value checked array[%lu] = [%d]\n", lb, array[lb]);
		if (array[lb] == value)
			return (lb);
		lb++;
	}

	return (-1);
}
