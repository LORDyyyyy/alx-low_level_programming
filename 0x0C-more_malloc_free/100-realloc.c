#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: main array
 * @old_size: the size of ptr
 * @new_size: wanted size
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL) /* thats mean old_size = 0 */
	{
		p = malloc(new_size);
		if (p == NULL || p == 0)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL || p == 0)
			return (NULL);
		for (i = 0; i < old_size; i++)
			*(p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
