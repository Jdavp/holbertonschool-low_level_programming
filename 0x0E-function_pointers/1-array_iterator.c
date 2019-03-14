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

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size && action && array && size > 0)
	{
		action(array[i]);
		i++;
	}

}
