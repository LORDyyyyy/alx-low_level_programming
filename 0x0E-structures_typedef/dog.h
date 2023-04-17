#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for a dog name/age/owner name
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: First task
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
