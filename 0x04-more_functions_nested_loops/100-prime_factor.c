#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long x = 612852475143, i, j;
	int flag = 1;
	
	for (i = x/10000; i > 0; i--)
	{
		if (x % i == 0)
		{
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{

				printf("%ld\n", i);
				break;
			}
		}
		flag = 1;
	}
	return (0);
}

