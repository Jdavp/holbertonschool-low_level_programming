#include "holberton.h"
/**
 *print_rev - print string in reverse
 *
 *prints string from the last point to the first
 *
 *@s: string pointer
 *
 *Return: return string length
 **/

void print_rev(char *s)
{
int c = 0;

while (s[c])

c++;

while (c--)

_putchar(s[c]);

_putchar('\n');
}
