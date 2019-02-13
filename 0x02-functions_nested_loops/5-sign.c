#include "holberton.h"

/**
 * print_sign - check for the sign of a number
 *
 *@n: - numbers entrance
 *
 *Return: 1 0 or -1 depending of the sign
 */

int print_sign(int n)

{
	if (n >= 1)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{

	_putchar(45);
		return (-1);
	     }
}
