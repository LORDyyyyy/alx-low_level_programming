#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	int i, k = n;

	if (n <= 0)
		_putchar('\n');
	for (; n > 0; n--)
	{
		for (i = n; i < k ; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
