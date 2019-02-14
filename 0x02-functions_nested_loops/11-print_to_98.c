#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print number bigger or smaller than 98
 *
 *@n: number entrance
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("98\n");
}
