#include <stdlib.h>
#include "lists.h"

/**
 *list_len - length of the node
 *@h: header
 *
 *Return: counter
 */


size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
		{h = h->next;
			i++;
		}
	return (i);
}
