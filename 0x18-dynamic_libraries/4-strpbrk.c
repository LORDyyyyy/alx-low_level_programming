#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the string
 * @accept: inputed string
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	return ('\0');
}
