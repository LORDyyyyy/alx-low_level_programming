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

/**
 * dog_t - a typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
