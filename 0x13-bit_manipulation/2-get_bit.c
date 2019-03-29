#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - get bit at index
 * @n: number to be changed
 * @index: index to get the bit
 *
 *Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	n = n & 1;
	return (n);

}
