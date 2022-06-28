#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - new definition
* @name: name
* @age: age
* @owner: owner
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
