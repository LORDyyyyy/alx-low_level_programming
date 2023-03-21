#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10x
 * Return:  void
 */
void print_alphabet_x10(void)
{
	char i, n;
	
	for (n = '0'; n <= '9'; n++)
	{
		for (i = 'a'; i <='z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
