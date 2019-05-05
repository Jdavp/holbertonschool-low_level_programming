#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len - return the amount of modules
 *@h: initial pointer
 *
 *
 *Return: counter of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	while (h != NULL)
		return (1 + dlistint_len((*h).next));
	return (0);
}
