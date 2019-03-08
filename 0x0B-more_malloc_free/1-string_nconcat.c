#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - returns a pointer which contains a copy of other string
 *
 *@s1: inicial string
 *@s2: second string
 *
 *Return: zero
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int su = 0;
	unsigned int sd = 0;
	unsigned int st =0;

	if (s1 == NULL || s2 == NULL)
		return ("");

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[su] != '\0')
		su++;

	while (s2[sd] != '\0')
		sd++;

	if (n < sd)

	s3 = (char *)malloc(sizeof(char) * (su + sd + 1));

	if (s3 == NULL)
		return (NULL);

	while (st < sd + su + 1 || st < su + n + 1)
       {
	       if (st < su)
		       {
			       s3[st] = s1[st];
		       }
	       else
		       {
			       s3[st] = s2[st - sd];
		       }
	       st++;
       }
	return (s3);
	return (0);
}
