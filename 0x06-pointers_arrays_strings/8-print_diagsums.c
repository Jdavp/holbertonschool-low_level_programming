#include <stdio.h>
#include "holberton.h"

/**
 *print_diagsums - print diagonals
 *
 *print diagonals
 *
 *@a: pointer
 *@size: total size
 *
 *Return: returns what its left of a string after comparing
 **/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y;
	int add1 = 0;
	int add2 = 0;
	int l1 = 0;
	int l2 = 0;

	for (x = 0; x < (size * size) && l1 < size; x += size + 1)
	{
		add1 += a[x];
		l1++;
	}
	for (y = size - 1; y < (size * size) && l2 < size; y += size - 1)
	{
		add2 += a[y];
		l2++;
	}
	printf("%d, %d\n", add1, add2);
}
