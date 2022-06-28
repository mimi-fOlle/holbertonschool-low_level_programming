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
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	free(new_dog);
	return (new_dog);
}
