#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n : the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;
	if ( r < 0)
		r *= -1;
	_putchar(r + 48);
	return (r);
}
