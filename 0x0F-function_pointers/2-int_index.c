#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer with a specific condition
 * @array: array
 * @size: array size
 * @cmp: a pointer function that contain the condition
 *
 * Return: 1 if the element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
