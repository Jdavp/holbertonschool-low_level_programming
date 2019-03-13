#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *new_dog - the mascot
 *@name: name
 *@age: age
 *@owner: owner
 *Return: list
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *list;

	list = malloc(sizeof(dog_t));

	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	list->name = _strdup(name);

	if (list->name == NULL)
	{
		free(list);
		free(list->name);
		return (NULL);
	}

	list->owner = _strdup(owner);

	if (list->owner == NULL)
	{
		free(list);
		free(list->name);
		free(list->owner);
		return (NULL);
	}

	list->age = age;
	return (list);
}

/**
 *_strdup - returns a pointer which contains a copy of other string
 *
 *@str: inicial string
 *
 *
 *Return: zero
 **/

char *_strdup(char *str)
{
	char *sec;
	int i;
	int si = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; ++i)
		;
	i++;

	sec = malloc(sizeof(char) * i);
	if (!sec)
	{
		return (NULL);
	}

	while (str[si])
	{
		sec[si] = str[si];
		si++;
	}
sec[si] = 0;
	return (sec);
}
