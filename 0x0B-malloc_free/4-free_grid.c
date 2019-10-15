#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional
 * @grid: double pointer
 * @height: height of the array
 *
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int cnt;

	for (cnt = 0; cnt < height; cnt++)
	{
		free(*(grid + cnt));
	}

	free(grid);
}
