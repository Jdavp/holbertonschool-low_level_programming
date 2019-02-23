#include "holberton.h"
/**
 *reverse_array - reverse the strings
 *
 *reverse the strings
 *
 *@a: start of the string
 *@n: lenght of string
 *
 *
 *Return: a string copy
 **/

void reverse_array(int *a, int n)
{
	int front = 0;
	int aux = 0;

	n--;
	while (front < n)
	{
		aux = a[n];
		a[n] = a[front];
		a[front] = aux;
		front++;
		n--;
	}
}
