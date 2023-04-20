#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings with a separator
 * @separator: separator
 * @n: no. of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int nn = n;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arg, n);
	while (nn--)
		printf("%s%s", (str = va_arg(arg, char *)) ? str : "(nil)",
				nn ? (separator ? (separator) : "") : ("\n"));
	va_end(arg);
}
