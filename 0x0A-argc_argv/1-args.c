#include <stdio.h>

/**
 * main - entry point
 * @argv: array
 * @argc: argv size
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
