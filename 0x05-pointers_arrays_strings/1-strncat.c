#include "holberton.h"
/**
 *_strncat - return 2 concataneid strings limited by n
 *
 *concateneid limited by n
 *
 *@dest: destiny
 *@src:source
 *@n: limit
 *
 *Return: 2 string concataneid
 **/

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d])
		d++;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[d + s] = src[s];
	}
	return (dest);
}
