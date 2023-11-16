#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes all attributes in struct
 * @d: pointer to struct
 * @name: init attributes
 * @age: init age attributes
 * @owner: init owner attributes
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
