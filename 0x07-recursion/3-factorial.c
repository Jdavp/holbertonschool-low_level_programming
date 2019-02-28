#include "holberton.h"

/**
 *factorial - factorial of a number
 *
 *return factorial of a number
 *
 *@n: number
 *
 *Return: 0 1 or -1 depending of the factorial
 **/

int factorial(int n)

{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
