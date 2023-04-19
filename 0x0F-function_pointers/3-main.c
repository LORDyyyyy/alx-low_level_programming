#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array
 * @argc: argv size
 *
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int (*opiration)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opiration = get_op_func(argv[2]);
	if (!opiration)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opiration(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
