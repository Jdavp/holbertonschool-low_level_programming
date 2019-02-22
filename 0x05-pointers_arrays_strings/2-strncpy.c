#include "holberton.h"
/**
 *_strncpy - return the copie of one string in another
 *
 *copy of string
 *
 *@dest: destiny
 *@src:source
 *@n: limit
 *
 *Return: a string copy
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];
	for ( ; s < n; s++)
		dest[s] = '\0';

	return (dest);
}
