#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: pointer to hash table
 *@key: key variable to look for
 *Return: address to the array
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keyindex;
	const unsigned char *newkey;

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);

	newkey = (const unsigned char *)key;

	keyindex = key_index(newkey, ht->size);

	while (ht->array[keyindex] != NULL)
	{
		if (strcmp(ht->array[keyindex]->key, key) == 0)
		{
			return (ht->array[keyindex]->value);
		}
		ht->array[keyindex] = ht->array[keyindex]->next;
	}
	return (NULL);
}
