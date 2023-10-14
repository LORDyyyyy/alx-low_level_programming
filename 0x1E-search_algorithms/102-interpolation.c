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
	size_t high, low, pos;

	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]))
                                * (value - array[low]));
	if (!array || !size)
		return (-1);

	if (array[high] > value || array[low] < value)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	while (array[high] >= value && array[low] <= value && low <= high)
	{
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;

		pos = low + (((double)(high - low) / (array[high] - array[low]))
                                * (value - array[low]));
	}

	return (-1);
}
