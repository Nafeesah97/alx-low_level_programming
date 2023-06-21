#include "dog.h"
#include <stddef.h>

/**
 * typedef new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age ofdog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner =owner;
}
