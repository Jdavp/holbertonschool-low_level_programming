#include "holberton.h"
/**
*_strlen - function returns the length of a string
*
*length of a string
 *
 *@s: pointer
 *
 *Return: return string length
 **/

int _strlen(char *s)
{
int l = 0;

while (*s != '\0')
{
s++;
l++;
}
return (l);
}
