#include "main.h"

/**
 * rot13 - encodes a string
 * @str: the string
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i, j;
	char am[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char nz[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; str[i]; i++)
		for (j = 0; j < 26; j++)
			if (str[i] == am[j])
				str[i] = nz[j];
			else if (str[i] == nz[j])
				str[i] = am[j];
	return (str);
}
