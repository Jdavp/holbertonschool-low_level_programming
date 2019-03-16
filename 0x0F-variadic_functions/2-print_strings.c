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
	char *hola;

	va_start(list, n);

	while (i != n)
	{
		hola = va_arg(list, char *);
		if (hola == NULL)
			printf("%p", hola);
		if (hola != NULL)
			printf("%s", hola);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
