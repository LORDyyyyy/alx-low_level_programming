#include <stdio.h>

/**
 * main - entry point
 * @argv: array
 * @argc: array size
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
