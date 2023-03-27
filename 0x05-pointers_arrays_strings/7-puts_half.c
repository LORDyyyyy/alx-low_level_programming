#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len & 1)
		n = (len - 1) / 2;
	else
		n = len / 2 + 1;
	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
