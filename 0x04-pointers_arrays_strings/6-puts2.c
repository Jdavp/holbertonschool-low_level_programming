B#include "holberton.h"
/**
 *puts2 - print string every 2 spaces
 *
 *prints string from the last point to the first exchanging positions
 *
 *@str: string pointer
 *
 *Return: return string length
 **/

void puts2(char *str)
{
	int c = 0;
	int b;

while (str[b])
{
b++;
}
for (c = 0; c ; c++)
{
	if ((c % 2) == 0)

		_putchar(str[c]);
	}
_putchar('\n');
}
