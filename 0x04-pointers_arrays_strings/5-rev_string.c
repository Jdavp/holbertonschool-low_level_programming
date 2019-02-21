#include "holberton.h"
/**
 *rev_string - print string in reverse after exchange positions
 *
 *prints string from the last point to the first exchanging positions
 *
 *@s: string pointer
 *
 *Return: return string length
 **/

void rev_string(char *s)
{
int front = 0;
int back = 0;
int aux = 0;

while (s[back] != '\0')
back++;
back--;
while (back > front && back != front)
{
aux = s[front];
s[front] = s[back];
s[back] = aux;
front++;
back--;
}
}
