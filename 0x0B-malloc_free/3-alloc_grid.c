#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p, cnt, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height);

	if (p == NULL)
		return (NULL);

	for (cnt = 0; cnt < height; cnt++)
	{
		*(p + cnt) = (int *) malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
