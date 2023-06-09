#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * slen - string size
 * @s: string
 *
 * Return: size of s
 */
int slen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}
/**
 * string_nconcat - concatenate s1 with the first n-bytes of s2
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2
 *
 * Return: s1 + s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = slen(s1);
	size2 = slen(s2);
	if (n >= size2)
		n = size2;

	str = malloc(n + size1 + 1);
	if (str == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size1 ; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}

