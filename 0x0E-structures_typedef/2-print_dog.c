#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints every element of dog structure
 * @d:structure name
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? (d->name) : ("(nil)"));
		printf("Age: %f\n", (d->age) ? (d->age) : (0));
		printf("Owner: %s\n", (d->owner != NULL) ? (d->owner) : ("(nil)"));
	}
}
