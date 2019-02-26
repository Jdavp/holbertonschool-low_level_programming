#include "holberton.h"

/**
 *_strpbrk - finds similar values in 2 string and returns after find same vas
 *
 *returns the sum of 2 strings after similaritys
 *
 *@accept: string to compare
 *@s:inicial string
 *
 *Return: returns what its left of a string after comparing
 **/

char *_strpbrk(char *s, char *accept)
{
	int p = 0;
	int pa;

	while (s[p])
	{
		pa = 0;
		while (accept[pa])
		{
			if (s[p] == accept[pa])
				return (&s[p]);
			pa++;
		}
		if (s[p] == '\0')
			return (&s[p]);
		p++;
	}
	return (0);
}
