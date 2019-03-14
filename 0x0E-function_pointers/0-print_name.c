#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - shows prints of a function
 *@name: name pointer
 *@f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
