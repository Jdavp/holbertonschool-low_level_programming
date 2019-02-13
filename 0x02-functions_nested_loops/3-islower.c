#include "holberton.h"

/**
 * _islower - check for  lowercase
 *
 *@c: - letters entrance
 *
 *Return: 1 its is lower case
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
