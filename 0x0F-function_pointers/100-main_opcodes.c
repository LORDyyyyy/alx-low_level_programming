#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array
 * @argc: argv size
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i--)
		printf("%02hhx%s", *p++, (i) ? " " : "\n");
	return (0);
}
