#include <stdlib.h>
#include "dog.h"

/**
 * slen - return the length of a string
 * @s: the string
 *
 * Return: s size
 */
int slen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}

/**
 * _strcpy - copies a string
 * @dest: dest
 * @src: source
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a enw dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: a new copy 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name != NULL && owner != NULL)
	{
		int name_s = slen(name), owner_s = slen(owner);

		n_dog = malloc(sizeof(dog_t));
		n_dog->name = malloc(name_s + 1);
		
		if (n_dog->name == NULL)
		{
			free(n_dog);	
			return (NULL);
		}
		
		n_dog->owner = malloc(owner_s + 1);
		
		if (n_dog->owner == NULL)
		{
			free(n_dog->name);
			free(n_dog);
			return (NULL);
		}

		n_dog->age = age;
	}
	return (n_dog);
}






