#include "main.h"

/**
 * set_bit - changes a bit at an index
 * @n: integer
 * @index: index
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
