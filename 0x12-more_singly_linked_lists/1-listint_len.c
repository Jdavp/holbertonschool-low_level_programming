#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *listint_len - return nodes
 *@h: initial pointer
 *
 *
 *Return: counter of nodes
 */


size_t listint_len(const listint_t *h)
{
	while (h != NULL)
		return (1 + listint_len((*h).next));
	return (0);
}
