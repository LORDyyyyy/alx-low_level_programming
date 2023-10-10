#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: sorted array of integers
 * @size: array size
 * @value: the value to search for
 *
 * Return: index if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left, right;

	if (!size || !array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], (i == right ? "\n" : ", "));

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (value);
		array[mid] > value ? (right = mid - 1) : (left = mid + 1);
	}

	return (-1);
}
