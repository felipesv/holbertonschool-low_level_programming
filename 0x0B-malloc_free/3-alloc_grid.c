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
	int **p, cnt;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height);

	for (cnt = 0; cnt < height; cnt++)
	{
		*(p + cnt) = (int *) malloc(width * sizeof(int));
	}

	return (p);
}
