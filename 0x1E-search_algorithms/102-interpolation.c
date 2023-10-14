#include "search_algos.h"


/**
 * interpolation_search -  searches for a value in an array of integers
 * @array: array of integers
 * @size: array size
 * @value: the value to search for
 *
 * Return: index if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t g, l, pos;

	l = 0;
	g = size - 1;

	if (!array || !size)
		return (-1);

	while (l <= g)
	{
		pos = l + (((double)(g - l) / (array[g] - array[l])) * (value - array[l]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			g = pos - 1;
		else
			l = pos + 1;
	}

	return (-1);
}
