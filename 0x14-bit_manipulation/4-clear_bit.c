#include "main.h"

/**
 * clear_bit - sets a bit to 0 at an index
 * @n: integer
 * @index: index
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
