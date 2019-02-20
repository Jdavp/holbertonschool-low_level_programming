#include "holberton.h"
/**
 *_puts - print string
 *
 *prints string
 *
 *@str: string pointer
 *
 *Return: return string length
 **/

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}
 _putchar('\n');
}
