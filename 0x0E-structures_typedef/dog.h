#ifndef _DOG_H_
#define _DOG_H_
#include<stdio.h>
#include<stdlib.h>

/**
 * struct dog - Check the code
 * @name: Check name of dog
 * @age: Check age of dog
 * @owner: Check owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
