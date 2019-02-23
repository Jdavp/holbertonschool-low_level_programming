#include "holberton.h"
/**
 *string_toupper - changes lower to upper case letters
 *
 *change lower letters for upper case
 *
 *@lower: start of the string
 *
 *
 *Return: a string in upper letters
 **/

char *string_toupper(char *lower)
{
	int n;

	while (lower[n])
		{
		if (lower[n] >= 'a' && lower[n] <= 'z')
			lower[n] = lower[n] - 32;
		n++;
		}
	return (lower);
}
