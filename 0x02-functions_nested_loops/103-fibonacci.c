#include <stdio.h>
/**
 * main - enrty point
 * Return: 0
 */
int main(void)
{
	long f = 0, s = 1, i, t, sum = 0;

	for (i = 1; i <= 33; i++)
	{
		t = f + s;
		f = s;
		s = t;
		if (t % 2 == 0)
			sum += t;
	}
	printf("%ld\n", sum);
	return (0);
}
