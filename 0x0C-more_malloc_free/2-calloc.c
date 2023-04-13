#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: array pointer
 * @b: constant byte
 * @n: the first n bytes of the memory area
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - just like malloc, but all elements are set to 0
 * @nmemb: number of elements
 * @size: sizof() the array element
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == 0)
		return (NULL);
	
	_memset(m , 0, size * nmemb);
	return (m);
}
