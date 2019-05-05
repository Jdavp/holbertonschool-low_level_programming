#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *get_dnodeint_at_index - return the nth node of a list
 *@head: initial pointer
 *@index: number of node
 *Return: index of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
