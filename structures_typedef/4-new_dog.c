#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: attribute
 * @age: age attribute
 * @owner: owner attribute
 * Return: returns null if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nameLen, ownerLen;
	dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	nameLen = 0;
	ownerLen = 0;

	while (name[nameLen] != '\0')
	{
		nameLen++;
	}
	while (owner[ownerLen] != '\0')
	{
		ownerLen++;
	}
	new_dog->name = (char *) malloc(sizeof(char) * (nameLen + 1));
	new_dog->owner = (char *) malloc(sizeof(char) * (ownerLen + 1));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < nameLen; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[nameLen] = '\0';
	new_dog->age = age;
	for (i = 0; i < ownerLen; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[ownerLen] = '\0';
	return (new_dog);
}
