#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - gets the right function
 * @s: sign
 *
 * Return: the function answer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod}};
	int i;

	while (i < 5)
	{
		if (s && *s == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
