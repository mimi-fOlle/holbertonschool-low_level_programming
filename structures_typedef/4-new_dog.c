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

	dog_t *hot_dog;

	hot_dog = malloc(sizeof(*hot_dog));

	if (hot_dog == NULL || !(name) || !(owner))
	{
		free(hot_dog);
		return (NULL);
	}
	for (na = 0; name[na]; na++)
		;
	for (ow = 0; owner[ow]; ow++)
		;
	hot_dog->name = malloc(na + 1);
	hot_dog->owner = malloc(ow + 1);
	if (!(hot_dog->name) || !(hot_dog->owner))
	{
		free(hot_dog->name);
		free(hot_dog->owner);
		free(hot_dog);
		return (NULL);
	}
	for (i = 0; i < na; i++)
		hot_dog->name[i] = name[i];
	hot_dog->name[i] = '\0';

	hot_dog->age = age;

	for (i = 0; i < ow; i++)
		hot_dog->owner[i] = owner[i];
	hot_dog->owner[i] = '\0';

	return (hot_dog);
}
