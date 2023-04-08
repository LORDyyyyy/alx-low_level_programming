#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: first string
 * @src: second string
 * @n: numbr of characters to be copied
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, slen = 0;

	while (src[slen] != '\0')
		slen++;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (i = slen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
