#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long i, sum = 0;

	for (i = 3; i <= 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%ld\n", sum);
	return (0);
}
