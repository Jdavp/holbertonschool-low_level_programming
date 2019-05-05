#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - print data in all nodes
 *@h: initial pointer
 *
 *
 *Return: counter of nodes
 */


size_t print_dlistint(const dlistint_t *h)
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
