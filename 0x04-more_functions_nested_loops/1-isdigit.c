#include "main.h"

/**
 * _isdigit - check if c is digit or not
 * @c: the character to check
 * Return: 1 is true
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= '9')
		return (1);
	return (0);
}
