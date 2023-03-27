#include "main.h"

/**
 * swap_int - swap between two integers
 * @a: first number
 * @b: second number
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
