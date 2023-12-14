#include "search_algos.h"

/**
 * print_array - print array of integers
 *
 * @array: Printed array
 * @size: number of element
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - search for a value in a sorted array
 *
 * @array: pointer to the first element
 * @size: number of element
 * @value: value to search
 *
 * Return: the first index where value is found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array + low, high - low + 1);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
