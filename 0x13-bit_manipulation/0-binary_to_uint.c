#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - 48);
		if (b[i + 1] != '\0')
		  num = num << 1;
			i++;
	}
	return (num);
}
