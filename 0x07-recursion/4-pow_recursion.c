#include "holberton.h"

/**
 *_pow_recursion - number to a exponent
 *
 *x to exponential y
 *
 *@x:number
 *@y: exponential
 *
 *Return: 0 1 or -1 depending of the exponential number
 **/

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);

}
