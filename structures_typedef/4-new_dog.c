#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create a new_dog
* @name: member
* @age: member
* @owner: member
*
* Return: return to pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, na, ow;

	dog_t *new_dog = malloc(sizeof(new_dog));

	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}
	for (na = 0; name[na]; na++)
		;
	for (ow = 0; owner[ow]; ow++)
		;
	new_dog->name = malloc(na + 1);
	new_dog->owner = malloc(ow + 1);
	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < na; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (i = 0; i < ow; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
