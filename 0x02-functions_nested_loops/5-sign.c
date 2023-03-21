#include "main.h"

/**
 * print_sign - check for the number sign
 * @n: the number
 * Return: 1 if + , 0 if 0, and -1 if -
 */
int print_sign(int n)
{
	if (n > 1)
	{	
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
