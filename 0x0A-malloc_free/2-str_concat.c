#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer which contains a copy of other string
 *
 *@str: inicial string
 *
 *
 *Return: zero
 **/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int su;
	int sd;
	int st;

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
		{
		return (" ");
		}

	while(s1[su] != '\0')
		su++;

	while (s2 [sd] != '\0')
		sd++;

	s3 = malloc(sizeof (char) * (su + sd));

	while (s2[sd] != '\0')
	{
		s3[st] = s1[su];
		st++;su++;
		s3[st] = s2[sd];
		st++;sd++;
	}

      return (s3);
      return (0);
}
