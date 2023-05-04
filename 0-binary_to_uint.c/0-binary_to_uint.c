#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: binary string
 *
 * Return: u int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);
		n = n * 2 + (*b - 48);
		b++;
	}
	return (n);
}
