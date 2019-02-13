#include "holberton.h"

/**
 * print_last_digit - print last digit
 *
 *@n: - numbers entrance
 *
 *Return: the last number
 */

int print_last_digit(int n)

{
	n = (n % 10);
	if (n < 0)
		n = n * -1;
	{
	_putchar(n + '0');
	}
	return (n);
}
