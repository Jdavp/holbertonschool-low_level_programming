#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_print - function that add an elemet to the hash table
 *@ht: pointer to the hash table
 *Return: address to the array
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t **aux = ht->array;
	hash_node_t *ai, *otra;

	while (i < ht->size)
	{
		ai = aux[i];
		while (ai != NULL)
		{
			free(ai->value);
			free(ai->key);
			otra = ai;
			ai = ai->next;
			free(otra);
		}
	i++;
	}
	free(ht->array);
	free(ht);
}
