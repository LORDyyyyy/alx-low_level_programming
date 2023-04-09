#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argv: array
 * @argc: argv size
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n1, n2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ans = n1 * n2;

	printf("%d\n", ans);
	return (0);
}
