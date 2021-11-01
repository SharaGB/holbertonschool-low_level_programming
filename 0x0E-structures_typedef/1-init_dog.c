#include "dog.h"
/**
 * init_dog - Check the code
 * @d: Check dog
 * @name: Check name of dog
 * @owner: Check owner of dog
 * @age: Check age of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
