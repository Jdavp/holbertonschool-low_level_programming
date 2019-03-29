#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * set_bit - set a different bit in index
 * @n: number from system
 * @index: index to get the bit
 *
 *Return: the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int it = 1;

	if (index > 64)
		return (-1);
	it = it << index;
	*n = *n | it;
	return (1);

}
