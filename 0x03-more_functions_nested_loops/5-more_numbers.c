#include "holberton.h"
/**
*more_numbers - print numbers
 *
 *print digits with just 3 putchar
 *
 *
 */

void more_numbers(void)
{
int i = 0;
int j;
int k;

while (i < 10)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j > 9)
{
_putchar((j / 10 + '0'));
}
k = ((j % 10) + '0');
_putchar(k);
}
_putchar('\n');
i++;
}
}
