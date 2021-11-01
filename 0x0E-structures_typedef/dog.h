#ifndef _DOG_H_
#define _DOH_H_

/**
 * struct dog - Check the code
 * @name: Check name of dog
 * @owner: Check owner of dog
 * @age: Check age of dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif