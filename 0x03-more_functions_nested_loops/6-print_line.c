#include"holberton.h"
/**
*print_line - will print the lines declare by the user
*
*print number of lines
*
*@n: number of lines enter by the user
*
*/

void print_line(int n)
{
int l;

if (n > 0)
{
for (l = 0 ; l < n ; l++)
_putchar('_');
}
_putchar('\n');

}
