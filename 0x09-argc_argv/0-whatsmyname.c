#include <stdio.h>
#include <stdlib.h>
/**
 *main - print index in a string
 *
 *@argc:counter
 *@argv:vector of index
 *
 *Return: zero
 **/

int main(int argc, char **argv)
{
	(void) argc;
		printf("%s\n", *argv++);
		return (0);
}
