#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++, dest_len++)
		dest[dest_len] = src[i];
	dest[dest_len++] = '\0';
	return (dest);
}
