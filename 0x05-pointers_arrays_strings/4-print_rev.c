#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

