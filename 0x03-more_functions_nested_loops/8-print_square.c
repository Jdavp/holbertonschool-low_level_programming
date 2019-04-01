#include "holberton.h"
/**
 *print_square - print # as many times as size
 *
 *@size: number of times to be printed
 *
 */

void print_square(int size)
{
	int i = 0;
	int l = 0;

	if (size <= 0)
		_putchar('\n');
	while (l < size)
	{
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		l++;
		i = 0;
		_putchar('\n');
	}
}
