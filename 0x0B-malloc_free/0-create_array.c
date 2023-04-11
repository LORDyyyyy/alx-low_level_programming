#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: array size
 * @n: specific char
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	while (size--)
		arr[size] = c;
	return (arr);
}
