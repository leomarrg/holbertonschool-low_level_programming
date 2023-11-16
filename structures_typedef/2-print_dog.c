#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - this will print the attributes in the struct
 * @d: takes attributes from struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		if (d->age > 0)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");

		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
