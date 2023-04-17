#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog structure
 * @d: dog structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
