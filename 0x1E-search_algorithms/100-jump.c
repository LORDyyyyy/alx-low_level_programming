#include "search_algos.h"


/**
 * jump_search -  searches for a value in an array of integers
 * @array: array of integers
 * @size: array size
 * @value: the value to search for
 *
 * Return: index if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, i, x;

	m = 0;

	if (!array || !size)
		return (-1);

	while (array[m] <= value && m < size)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		i = m;
		m += sqrt(size);
		/* if (m > size - 1)
			m = size; */
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, m);
	for (x = i; x < m && x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
