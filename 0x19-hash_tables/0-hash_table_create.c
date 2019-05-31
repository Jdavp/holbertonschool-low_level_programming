#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_create - function to create a hashtable
 *@size: size of the array that determines hashtables lenght
 *Return: address to the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
	{
	return (NULL);
	}
	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t));
	if (hashtable->array == NULL)
	{
	return (NULL);
	}
	return (hashtable);
}
