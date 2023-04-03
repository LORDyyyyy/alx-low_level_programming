#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i, flag = 0, loc = 0;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
