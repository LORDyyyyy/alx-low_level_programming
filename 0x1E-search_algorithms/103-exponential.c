#include "search_algos.h"


/**
 * binary_search_rl - searches for a value in a sorted array of integers
 * @array: sorted array of integers
 * @size: array size
 * @value: the value to search for
 *
 * Return: index if found, -1 otherwise
 */
int binary_search_rl(int *array, int value, size_t left, size_t right)
{
	size_t i, mid;

	if (!array)
		return (-1);

	for (; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], (i == right ? "\n" : ", "));

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		array[mid] > value ? (right = mid - 1) : (left = mid + 1);
	}

	return (-1);
}


/**
 * exponential_search -  searches for a value in an array of integers
 * @array: array of integers
 * @size: array size
 * @value: the value to search for
 *
 * Return: index if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array || !size)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        	i = i*2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, MIN(i, size - 1));

	return (binary_search_rl(array, value, i / 2, MIN(i, size - 1)));
}
