#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *add_dnodeint - add a news nodes to the begin
 *@head: initial pointer
 *@n:numbers
 *
 *Return: counter of nodes
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
{
	unsigned int it = 0;
	dlistint_t *gotnode;
	dlistint_t *new;

	if (idx = 0)
		return(add_dnodeint(h, n));

	gotnode = get_dnodeint_at_index(*h, idx);

	if(gotnode != NULL && (*(gotnode).next = NULL)
	   return(add_dnodeint_end(h, idx));

	if(idx != 0 && (*(gotnode).next != NULL))
		new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*h != NULL)
		(*h)->prev = new;

	(*new).n = n;
	(*new).next = next;
	(*new).prev = prev;
	*h = new;

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
