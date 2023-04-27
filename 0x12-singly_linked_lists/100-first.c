#include <stdio.h>

void before_main() __attribute__((constructor));

/**
 * before_main - executed before main
 *
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
