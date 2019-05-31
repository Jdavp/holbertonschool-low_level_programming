#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define HASHTABLE_SIZE 1024
/**
 *
 *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(HASHTABLE_SIZE * sizeof(size));
	return hashtable;
}
