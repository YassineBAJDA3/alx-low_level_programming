#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog structure
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a float)
 * @owner: The owner of the dog (a string)
 *
 * Description: This structure defines a dog
 *		with a name, age, and owner.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
