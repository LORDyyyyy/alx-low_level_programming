#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *ii = haystack;
		char *jj = needle;

		while (*ii == *jj && *jj)
		{
			ii++;
			jj++;
		}
		if (*jj == '\0')
			return (haystack);
	}
	return ('\0');
}
