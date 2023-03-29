#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: the number of elements
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; j--, i++)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
