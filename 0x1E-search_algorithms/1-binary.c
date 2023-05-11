#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers using BSA
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of number if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, lb = 0, ub = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (lb <= ub)
	{
		idx = lb;
		printf("Searching in array: ");
		while (idx <= ub)
		{
			printf("%d", array[idx]);
			if (idx < ub)
				printf(", ");
			idx++;
		}
		printf("\n");

		mid = (lb + ub) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			ub = mid - 1;
		}
		else
			lb = mid + 1;
	}
	return (-1);
}
