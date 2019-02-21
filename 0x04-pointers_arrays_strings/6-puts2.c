#include "holberton.h"
/**
 *rev_string - print string in reverse after exchange positions
 *
 *prints string from the last point to the first exchanging positions
 *
 *@s: string pointer
 *
 *Return: return string length
 **/

void puts2(char *str)
{
	int front,back;
	int c = 0;

while (str[back])
{
back++;
}
for (front = 0; front < back; front++)
{
	if ((str[c] % 2) == 0)
		c++;
		_putchar(c);
	}
_putchar('\n');
}
