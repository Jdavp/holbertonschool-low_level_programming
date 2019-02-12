#include "holberton.h"

/**
 * print_alphabet_x10 - prints letters
 *
 *Return: void 0
 */

void print_alphabet_x10(void)
{
	int l;
	int alf;

	for (l = 1 ; l <= 10 ; l++)
	{
		for (alf = 97 ; alf <= 122 ; alf++)
		_putchar(alf);
		_putchar('\n');
	}
}
