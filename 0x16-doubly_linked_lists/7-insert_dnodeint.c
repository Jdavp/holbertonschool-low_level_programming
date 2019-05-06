#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *insert_dnodeint_at_index - add a news node at given index
 *@h: initial pointer
 *@n:numbers
 *@idx: index
 *Return: counter of nodes
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *gotnode;
	dlistint_t *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	gotnode = get_dnodeint_at_index(*h, idx);

	if (gotnode != NULL && (*gotnode).next == NULL)
		return (add_dnodeint_end(h, idx));

	if (idx != 0 && (*gotnode).next != NULL)
		new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	(*new).prev = (*gotnode).prev;
	(*(*gotnode).prev).next = new;
	(*new).n = n;
	(*new).next = gotnode;
		(*gotnode).prev = new;

		return (new);
}
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
