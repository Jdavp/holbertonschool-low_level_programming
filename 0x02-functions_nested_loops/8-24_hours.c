#include "holberton.h"

/**
 * jack_bauer - print
 *
 *@decih decimals
 *
 *Return: void 0
 */

void jack_bauer(void)
{
	int hour;
	int minut;

	for (hour = 0 ; hour <= 23 ; hour++)
	{
		for (minut = 0 ; minut <= 59 ; minut++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minut / 10 + '0');
			_putchar(minut % 10 + '0');
			_putchar('\n');

		}
	}
}
