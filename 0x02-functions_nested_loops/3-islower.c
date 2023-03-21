#include "main.h"

/**
 * _islower - check if c is a lower character or not
 * @c : the char to check
 * Return: 1 if lower , 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
