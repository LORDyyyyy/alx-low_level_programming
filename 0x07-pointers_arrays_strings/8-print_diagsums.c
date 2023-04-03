#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: the matrix
 * @size: size
 *
 * Retruen: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			if ((i + j) == (N - 1))
				sum2 += a[i][j];
		}
	printf("%d, %d\n", sum1, sum2);
}
