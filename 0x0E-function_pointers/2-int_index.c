#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - return comparation
 *@array: pointer to array
 *@size: time it repeats
 *@cmp: function that compare
 *Return: index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
