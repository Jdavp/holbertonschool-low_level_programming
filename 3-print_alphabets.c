#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print
 *
 *print 2 alphabets
 *
 *Return: alwasy 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);

	for (ch = 'A' ; ch <= 'Z' ; ch++)
		 putchar(ch);

        putchar('\n');
	return (0);
}
