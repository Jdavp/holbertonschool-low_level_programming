#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings - print characthers in a string
*@n: number of parameters in the list
*@separator: , to separate
*
*
*Return: total fo the sum
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	while (i < n - 1)
		{
		printf("%s", va_arg(list, char *));
		printf("%s", separator);
		i++;
		}
	printf("%s", va_arg(list, char *));
	printf("\n");
	va_end(list);
}
