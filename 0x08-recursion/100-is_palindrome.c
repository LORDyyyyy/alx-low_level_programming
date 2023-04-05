#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 *
 * Return: answer
 */
int is_palindrome(char *s)
{
	int i, j, len = 0;

	while (s[len])
		len++;
	for (i = 0, j = len - 1; s[i]; i++, j--)
		if (s[i] != s[j])
			return (0);
	return (1);
}
