#ifndef _HEADER_
#define _HEADER_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct data_types - a struct to the formats
 * @dp: 'data type' for the format
 * @f: function pointer
 */
typedef struct data_types
{
	char *dp;
	void (*f)(char*, va_list);
} data_type;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
