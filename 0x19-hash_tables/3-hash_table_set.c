#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_set - function that add an elemet to the hash table
 *@ht: hash table
 *@key: string key in the node
 *@value: value given to the node
 *Return: address to the array
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *newkey;
	unsigned long int keyindex;
	hash_node_t *newnode;
	hash_node_t *auxposition;

	if (!ht || !strlen(key) || !ht->size)
		return (0);


	newkey = (const unsigned char *)key;
	keyindex = key_index(newkey, ht->size);
	auxposition = ht->array[keyindex];
	if (ht->array[keyindex] != NULL)
	{
		while (ht->array[keyindex] != NULL)
		{
			if (strcmp(ht->array[keyindex]->key, key) == 0)
			{
				free(ht->array[keyindex]->value);
				ht->array[keyindex]->value = strdup(value);
				return (1);
			}
			ht->array[keyindex] = ht->array[keyindex]->next;
		}
	}
	newnode = malloc(sizeof(hash_node_t));
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = auxposition;
	(*ht).array[keyindex] = newnode;

	return (1);
}
