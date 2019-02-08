#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet
 *
 *print alphabet
 *
 *Return: its 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar (ch);
	}
	putchar('\n');
	return (0);
}
