#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long f = 0, s = 1, i, t;

	for (i = 1; i <= 50; i++)
	{
		t = f + s;
		printf("%ld", t);
		f = s;
		s = t;
		if (i != 50)
			printf(", ");
	}
	return (0);
}
