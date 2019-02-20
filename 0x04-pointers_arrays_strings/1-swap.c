#include "holberton.h"
/**
 *swap_int - change the value of 2 integers
 *
 *update value of 2 integers
 *
 *
 *@a: first int
 *@b: second int
 *
 **/

void swap_int(int *a, int *b)
{
int n;

n = *b;
*b = *a;
*a = n;
}
