#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum element
 * @max: maximum element
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, j = 0, *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == 0)
		return (NULL);
	for (i = min; i <= max; j++, i++)
		arr[j] = i;
	return (arr);
}
