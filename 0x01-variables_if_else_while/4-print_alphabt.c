#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Description: Printing the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
