#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - 2 dimensional array of integers
  * @width: column
  * @height: row
  * Return: s dimensional array
  */
int **alloc_grid(int width, int height)
{
	int **pptr;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	pptr = malloc(sizeof(int *) * height);
	if (pptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		pptr[x] = malloc(sizeof(int) * width);
		if (pptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(pptr[x]);
			free(pptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			pptr[x][y] = 0;
	}
	return (pptr);
}
