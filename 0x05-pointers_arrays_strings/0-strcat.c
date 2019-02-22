#include "holberton.h"
/**
 *_strcat - return 2 concataneid strings
 *
 *concateneid to strings
 *
 *@dest: destiny
 *@src:source
 *
 *
 *Return: 2 string concataneid
 **/

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d])
		d++;
	for (s = 0; src[s]; s++)
		dest[d + s] = src[s];
	return (dest);
}
