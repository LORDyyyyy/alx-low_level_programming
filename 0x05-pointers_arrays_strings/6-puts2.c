#include "main.h"

/**
 * puts2 - prints a string
 * @str: the string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i, len = 0;

	for (i = 0; s[i] != '0'; i++)
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
