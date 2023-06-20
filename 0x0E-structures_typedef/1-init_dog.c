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
	if (d == NULL)
		return;
<<<<<<< HEAD
=======

>>>>>>> b82a96b6ca2cabb09cd28a1cd51557906f294649
	d->name = name;
	d->age = age;
	d->owner = owner;
}
