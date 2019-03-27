#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *print_listint - print data in a node
 *@h: initial pointer
 *
 *
 *Return: counter of nodes
 */


size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	while (h != NULL)
		return (1 + listint_len((*h).next));
	return (0);
}
