#include <stdio.h>
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
	int n, i, ans = 0, coins[] = {25, 10, 5, 2, 1};
	
	if (argc != 2)
		return (printf("Error\n"), 1);
	n = atoi(argv[1]);
	for (i = 0; i < 5; i++)
		while (n >= coins[i])
		{
			n -= coins[i];
			ans++;
		}
	printf("%d\n", ans);
	return (0);
}	
