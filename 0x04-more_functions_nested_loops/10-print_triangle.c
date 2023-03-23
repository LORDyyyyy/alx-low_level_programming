#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, k = size;

	if (size <= 0)
		_putchar('\n');
	for (; size > 0; size--)
	{
		for (i = size - 1; i > 0 ; i--)
			_putchar(' ');
		for (i = size; i <= k; i++)
			_putchar('#');
		_putchar('\n');
	}
}
