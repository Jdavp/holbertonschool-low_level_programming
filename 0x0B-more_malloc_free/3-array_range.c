#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *
 *@min: start of inits
 *@max: end of inits
 *
 *Return: zero
 **/

int *array_range(int min, int max)
{
	int *array;
	int i = min, p = 0;

	array = malloc(sizeof(int) * (max - min) + 1);

	if (array == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	while (i <= max)
	{
		array[p] = i;
		++p;
		++i;
	}
	return (array);
}
