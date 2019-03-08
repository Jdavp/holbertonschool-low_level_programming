#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *
 *
 *@b:character to fill memory
 *
 *Return: a
 **/

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
