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

	for (i = 'z'; i >= 'a'; i--)
		putchar (i);
	putchar('\n');
	return (0);
}
