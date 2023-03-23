#include "main.h"

/**
 * more_numbers - prints from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, l;

	for (l = 0; l <= 9; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			int s = i % 10;

			if (i >= 10)
				_putchar(1 + 48);
			_putchar(s + 48);
		}
		_putchar('\n');
	}
}
