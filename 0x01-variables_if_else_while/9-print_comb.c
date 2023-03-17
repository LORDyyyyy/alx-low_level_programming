#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Printing numbers with ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
