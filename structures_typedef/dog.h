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

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
