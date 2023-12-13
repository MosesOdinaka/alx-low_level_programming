#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in array of integers
 * @array: pointer to the 1st element of the array
 * @size: Number of element in the array
 * @value: value to search
 *
 * Return: First index where value is located, or -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
