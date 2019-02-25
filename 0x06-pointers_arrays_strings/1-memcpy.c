#include "holberton.h"
/**
 *_memcpy - place a constant n amount of times from a pointer to another
 *
 *place a new value in string an amount of times determined by another pointe
 *
 *@dest: destiny of pointers
 *@src: source of pointers
 *@n: times it repeats
 *
 *Return: a string in upper letters
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);

}
