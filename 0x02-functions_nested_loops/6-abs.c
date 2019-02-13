#include "holberton.h"

/**
 * _abs - print only absolute numbers
 *
 *@n: - numbers entrance
 *
 *Return: equal to absolute
 */

int _abs(int n)

{
	if (n < 0)
		n = n * -1;
	return (n);
}
