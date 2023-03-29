#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: frist string
 * @src: second string
 * @n: no. of characters to be appended
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++, dest_len++)
		dest[dest_len] = src[i];
	dest[dest_len++] = '\0';
	return (dest);
}
