#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct name
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog/
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = &d;

	ptr = malloc(sizeof(struct dog));

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
