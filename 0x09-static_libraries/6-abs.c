#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to check
 * Return: the result
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
