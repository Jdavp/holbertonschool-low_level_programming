#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - the mascot
 *@d: user
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %p\n", d->name);
		if (d->owner == NULL)
			printf("Owner: %p\n", d->owner);
		else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
