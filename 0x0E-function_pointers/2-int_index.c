#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - iterated in a array to print
 *@array: pointer to array
 *@size: time it repeats
 *@action: function that prints
 *@
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size )
	{

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return(-1);
}
