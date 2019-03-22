#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *print_list - print data in a node
 *@h: initial pointer
 *
 *
 *Return: counter of nodes
 */


size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{printf("[0] %p\n", h->str);
	h = h->next;
	i++;
	}
	while (h != NULL)
		{
			if (h->str == NULL)
				/*{
				printf("[0] %p\n", h->str);
				h = h->next;
				i++;
			}
			else*/
			{
				printf("[%d] %s\n", h->len, h->str);
				h = h->next;
				i++;
			}
		}
	return (i);
}
