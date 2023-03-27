#include "main.h"

/**
 * puts2 - prints a string
 * @str: the string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0' && str[i + 1] != '\0' && str[i + 2] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
