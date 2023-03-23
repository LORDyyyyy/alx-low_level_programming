#include "main.h"

/**
 * print_line - print _
 * @n: number of spaces
 * Return: void
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
