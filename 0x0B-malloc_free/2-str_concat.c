#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, k;
	char *arr;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	arr = malloc(len1 * sizeof(*s1) + len2 * sizeof(*s2) + 1);

	if (arr == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	for (j = len1, k = 0; j < len2 + len1; j++, k++)
		arr[j] = s2[k];
	arr[len1 + len2] = '\0';
	return (arr);
}
