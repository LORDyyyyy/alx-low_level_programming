#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; str[i]; i++)
		for (j = 0; j < 10; j++)
			if (str[i] == alpha[j])
				str[i] = nums[j];
	return (str);
}
