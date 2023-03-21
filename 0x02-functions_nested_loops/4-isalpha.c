#include "main.h"

/**
 * _isalpha - check if c is a character or not
 * @c: the character to check
 * Return: 1 is yes, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
