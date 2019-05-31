#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *key_index - function that gives you the index of a key
 *@size: size of the array that determines hashtables lenght
 *@key: string key in the node
 *Return: address to the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key);
	return (i % size);
}
