#include <stlib.h>
#include "dog.h"
/**
 *init_dog - the mascot
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@d: user
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog = d;
if (d == NULL)
	return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
}
