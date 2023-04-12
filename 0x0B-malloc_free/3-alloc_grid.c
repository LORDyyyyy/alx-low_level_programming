#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2d array of integers
 * @width: width
 * @height: height
 *
 * Return: the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(*arr));

	if (arr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(**arr));
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
