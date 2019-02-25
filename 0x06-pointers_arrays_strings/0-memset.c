#include "holberton.h"
/**
 *_memset - place a constant n amount of times
 *
 *place a new value in string an amount of times determined by the user
 *
 *@s: pointer
 *@b: constant
 *@n: times it repeats
 *
 *
 *Return: a string in upper letters
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);

}
