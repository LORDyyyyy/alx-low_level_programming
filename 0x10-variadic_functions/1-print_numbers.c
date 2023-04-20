#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with a separator
 * @separator: separator
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int nn = n;
	int flag = 1;

	if (separator == NULL)
		flag = 0;

	va_start(args, n);
	while (nn--)
		printf("%d%s", va_arg(args, int),  flag ? (nn ? separator : "\n") : "");
}
