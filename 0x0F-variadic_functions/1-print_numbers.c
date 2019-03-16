#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*print_numbers - print numbers
*@n: number of parameters in the list
*@separator: , to separate
*
*
*Return: total fo the sum
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	if (n != 0)
	{
		while (i < n)
		{
			printf("%d", va_arg(list, int));
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
