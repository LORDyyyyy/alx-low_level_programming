#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	char s2[1000];

	for (i = 0; i < len; i++)
		s2[i] = s[i];
	for (i = 0, j = len - 1; j >= 0; j--, i++)
		s[j] = s2[i];
}
