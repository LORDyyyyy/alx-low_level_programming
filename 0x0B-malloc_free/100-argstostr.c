#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * slen - string size
 * @s: the string
 *
 * Return: s size
 */
int slen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @av: array
 * @ac: av size
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k, size_sum = 0, indexs = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size_sum += slen(av[i]);

	str = malloc(size_sum * sizeof(char)  + 1);
	if (str == 0)
		return (NULL);
	while (j < ac)
	{
		for (k = 0; k < slen(av[j]); k++, indexs++)
			str[indexs] = av[j][k];
		str[indexs] = '\n';
		indexs++;
		j++;
	}
	str[indexs] = '\0';
	return (str);
}
