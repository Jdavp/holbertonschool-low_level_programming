#include "holberton.h"

/**
 * _isalpha - check for  lowercase and uppercase letters
 *
 *@c: - letters entrance
 *
 *Return: 1 its is lower case
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return(0);
}
