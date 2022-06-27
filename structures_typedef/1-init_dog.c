#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* struct dog - struct
* @d: dog
* @name: member name
* @age: member age
* @owner: member owner
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	if (d == NULL)
		printf("Ok");
}
