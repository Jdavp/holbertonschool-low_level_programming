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

char *_strdup(char *str)
{
	char *sec;
	int i;
	int si = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

	sec = malloc(sizeof(char) * i);

	if (sec == NULL)
	{
		return(NULL);
	}

	while (str[si])
	{
		sec[si] = str[si];
		si++;
	}
	return (sec);
}
