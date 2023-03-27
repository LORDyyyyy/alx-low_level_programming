#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len & 1)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = n; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
