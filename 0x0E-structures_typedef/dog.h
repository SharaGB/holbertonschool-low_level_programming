#ifndef DOG_H
#define DOG_H
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

#endif