#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 *main - print list of numbers
 *
 *numers with , from 0 to 99
 *
 *Return: 0
 */
int main(void)
{
	int deci;
	int digi;

	for (deci = 48 ; deci <= 57 ; deci++)
	{
		for (digi = 48 ; digi <= 57 ; digi++)
		{
			putchar(deci);
			putchar(digi);
			if (!(deci == 57 && digi == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
