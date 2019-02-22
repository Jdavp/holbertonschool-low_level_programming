#include "holberton.h"
/**
 *_strcmp - compare 2 strings an operates de diferences
 *
 *compare 2 strings
 *
 *@s1: first string
 *@s2: second string
 *
 *
 *Return: a string copy
 **/

int _strcmp(char *s1, char *s2)
{
	int s = 0;

	while (s1[s] && s2[s])

	{
		if (s1[s] < s2[s])
			return (s1[s] - s2[s]);
		else if (s1[s] > s2[s])
			return (s1[s] - s2[s]);
		s++;
	}
	return (0);
}
