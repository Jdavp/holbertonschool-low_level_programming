#include "holberton.h"

/**
 *_strlen_recursion - returns repetitions
 *
 *counts times using recursive
 *
 *@s: string
 *
 *Return: counter
 **/

int _strlen_recursion(char *s)

{
	int c = 0;

	if (*s != '\0')
	{
		c = _strlen_recursion(s + 1);
		c++;
	}
	return (c);
}
