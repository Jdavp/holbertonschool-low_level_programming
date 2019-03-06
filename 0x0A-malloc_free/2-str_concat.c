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
	int su = 0;
	int sd = 0;
	int st = 0;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
		{
		return ("");
		}
	while(s1[su] != '\0')
	{
		su++;
	}
	printf("su=%d\n",su);

	while (s2[sd] != '\0')
	{
	printf("sd = %d\n",sd);
		sd++;
	}
	printf("sd = %d\n",sd);

	s3 = (char *)malloc(sizeof(char) * (sd + su + 1));
	if (s3 == NULL)
	{
			printf("s3");
		return (NULL);
	}

	while (st < sd + su + 1)
	{
		if (su > '\0')
		{
		s3[st] = s1[su];
		st++;su++;
		}
		else
		{
		s3[st] = s2[sd];
		st++;sd++;
		}
	}
	return (s3);
      return (0);

}
