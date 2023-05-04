#include "main.h"


/**
 * print_binary - prints a binary integer
 * @n: the number to print
 *
 * ReturnL void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar(49);
			printed++;
		}
		else if (printed)
			_putchar(48);
	}
	if (!printed)
		_putchar('0');
}
