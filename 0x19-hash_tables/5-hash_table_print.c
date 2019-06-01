#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_print - function that add an elemet to the hash table
 *@ht: pointer to the hash table
 *Return: address to the array
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, m0 = 1;
	hash_node_t **ai = ht->array;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		while (ai[i] != NULL)
		{
			if (m0 == 1)
			{
				printf("'%s': '%s'", ai[i]->key, ai[i]->value);
				ai[i] = ai[i]->next;
				m0 = 0;
			}
			else
			{
				printf(", '%s': '%s'", ai[i]->key, ai[i]->value);
				ai[i] = ai[i]->next;
			}
		}
	i++;
	}
	printf("}\n");
}
