#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			continue;
		if (i == 0 ||
		str[i - 1] == ' ' ||
		str[i - 1] == '\n' ||
		str[i - 1] == '\t' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}')
			str[i] -= 32;

	}
	return (str);
}
