#include "main.h"

/**
 * print_number - prints an integer
 * @n: prints an integer
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, dig;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar(48);
	for (i = 1; i <= n; i *= 10)
		dig = 0;
	i /= 10;
	for (; i > 0; i /= 10)
	{
		dig = (n / i) % 10;
		_putchar(dig + 48);
	}
}
