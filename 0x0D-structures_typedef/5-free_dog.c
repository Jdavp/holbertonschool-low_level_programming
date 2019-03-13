#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *free_dog - free the info from the dogs
 *@d: user
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
