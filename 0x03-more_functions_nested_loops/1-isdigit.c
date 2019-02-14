B#include "holberton.h"

/**
 * _isdigit - check for  uppercase letters
 *
 *@c: - letters entrance
 *
 *Return: 1 its is upper case
 */

int _isdigit(int c)

{
if (c >= 48  && c <= 57)
return (1);

else
return (0);
}
