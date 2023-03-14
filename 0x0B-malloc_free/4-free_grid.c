#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a 2 dimemtional array prtviosly created
 * by alloc_grid function.
 * @grid: matrix double pointerl
 * @height: rows (ponter)
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(*(grid + n));
	}
	free(grid);
}
