#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Description: Printing the alphabet , lower then upper
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
