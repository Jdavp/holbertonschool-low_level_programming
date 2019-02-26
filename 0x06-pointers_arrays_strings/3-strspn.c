#include "holberton.h"

/**
 *_strspn - counts similar values in 2 strings
 *
 *returns the sum of similaritys in a string
 *
 *@accept: string to compare
 *@s:inicial string
 *
 *Return: returns what its left of a string after comparing
 **/

unsigned int _strspn(char *s, char *accept)
{
	int p = 0;
	int pa;
	int t = 0;

	while (s[p])
	{
		pa = 0;
		while (accept[pa])
		{
			if (s[p] == accept[pa])
				t++;
			pa++;
		}
			if (p > t)
				break;
	p++;
	}
	return (t);
}
