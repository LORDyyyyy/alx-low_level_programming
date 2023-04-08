#include "main.h"

/**
 * _isupper - to check if the character is upper case or not
 * @c: the character to check
 * Return: 1 if upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
