#include "main.h"

/**
 * _strlen - return the string length
 * @s: the string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
