#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - return a pointer to a 2 dimentional array of int.
 * @width: columns.
 * @height: rows.
 * Return: double pointer.
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int m, n, p, fr;

	fr = 0;
	if (width <= 0 || height <= 0)
		return (0);
	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);
	for (m = 0; m < height; m++)
	{
		*(s + m) = malloc(width * sizeof(int));
		if (*(s + m) == 0)
		{
			fr = 1;
			break;
		}
		for (n = 0; n < width; n++)
		{
			s[m][n] = 0;
		}
	}
	if (fr == 1)
	{
		for (p = 0; p <= m; p++)
		{
			free(*(s + p));
		}
	free(s);
	}
	return (s);

}
