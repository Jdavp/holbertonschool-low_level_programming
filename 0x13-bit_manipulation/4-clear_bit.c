#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * clear_bit - clear a bit in index
 * @n: number from system
 * @index: index to get the bit
 *
 *Return: 0 0r 1 succes or fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int it = *n;

	if (index > 64)
		return (-1);
	it = it >> (index + 1);
	if (it != 0)
		it = it << 1;
	for (; index > 0; index--)
	{
		it = it << 1;
		it = it + 1;
	}
	*n = *n & it;
	return (1);

}
