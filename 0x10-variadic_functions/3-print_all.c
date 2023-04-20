#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * format_char - to print a character
 * @separator: separator
 * @ap: va_list argument
 *
 * Return: void
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - to print an integer
 * @separator: separator
 * @ap: va_list argument
 *
 * Return: void
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - to print a float number
 * @separator: separator
 * @ap: va_list argument
 *
 * Return: void
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - to print a string
 * @separator: separator
 * @ap: va_list argument
 *
 * Return: void
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - prints all
 * @format: the format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	data_type datatypes[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (datatypes[j].dp)
		{
			if (format[i] == datatypes[j].dp[0])
			{
				datatypes[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}



