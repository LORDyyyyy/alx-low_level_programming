#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: dest
 * @src: source
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}
