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
	for (i = 0, j = len - 1; i < j; j--, i++)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
