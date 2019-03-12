#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *free_dog - free the info from the dogs
 *@d: user
 */

void free_dog(dog_t *d);
{
	free(dog_t->name);
	free(dog_t->owner);
	free(d);
}
