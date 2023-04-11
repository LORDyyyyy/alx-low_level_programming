#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: the string
 *
 * Return: a new copy of str
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *arr;

	if (str == 0)
		return (NULL);
	while (str[size])
		size++;
	arr = malloc(size * sizeof(*str) + 1);

	if (arr == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		arr[i] = str[i];
	return (arr);
}
