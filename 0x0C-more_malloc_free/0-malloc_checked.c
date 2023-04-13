#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the bytes to be stored
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
