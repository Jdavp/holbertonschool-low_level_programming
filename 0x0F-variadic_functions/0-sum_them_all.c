#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*sum_them_all - adds every number in a list
*@n: number of parameters in the list
*
*
*
*Return: total fo the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int total = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(list, int);
	}
	va_end(list);

	return (total);
}
