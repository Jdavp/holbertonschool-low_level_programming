#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * flip_bits - count numbers to change in 2 index
 * @m: inicial string index
 * @n: second string index
 *
 *
 *Return: 0 0r 1 succes or fail
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0, sum2 = 0, count = 0;

	sum = n ^ m;
	while (sum)
	{
		sum2 = sum;
		sum2 = sum2 & 1;
		if (sum2 == 1)
			count++;
		sum = sum >> 1;
	}
	return (count);

}
