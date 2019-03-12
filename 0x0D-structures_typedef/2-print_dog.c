#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - the mascot
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@d: user
 */

void print_dog(struct dog *d)
{
	if(d != NULL)
   	{
		if (d->name == NULL)
			printf("%p\n", d->name);
		if (d->owner == NULL)
			printf("%p\n", d->owner);
		printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
	}
}
