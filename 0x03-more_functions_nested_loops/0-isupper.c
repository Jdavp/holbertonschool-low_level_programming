#include "holberton.h"

/**
 * _isalpha - check for  uppercase letters
 *
 *@c: - letters entrance
 *
 *Return: 1 its is upper case
 */

int _isupper(int c)

{
  if (c >= 65 && c <= 90)
    return (1);

  else
    return (0);
}
