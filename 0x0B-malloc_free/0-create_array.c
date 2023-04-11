#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  array of chars, and initializes it with a specific char
 * @size: array size
 * @c: specific char
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (NULL);
	while (size--)
		arr[size] = c;
	return (arr);
}
