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


size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		h = h->next;
		i++;
	}
	return (i);
}
