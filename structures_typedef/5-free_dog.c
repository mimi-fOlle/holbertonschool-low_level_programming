#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free dogs
* @d: member
*/

void free_dog(dog_t *d)
{
	free(NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
