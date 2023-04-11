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
	if (size == 0)
		return (NULL);
	char *arr = malloc(size);

	while (size--)
		arr[size] = c;
	return (arr);
}
