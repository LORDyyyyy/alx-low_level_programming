#include "main.h"

/**
 * rot13 - encodes a string
 * @str: the string
 *
 * Return: *str
 */
char *rot13(char *str)
{
	int i, j;
	char am[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char nz[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	
	for (i = 0; str[i]; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == am[j])
			{
				str[i] = nz[j];
				break;
			}
	return (str);
}
