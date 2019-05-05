#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *add_dnodeint_end - add a news nodes at the end
 *@head: initial pointer
 *@n:numbers
 *
 *Return: counter of nodes
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).n = n;
	(*new).next = NULL;
	(*new).prev = temp;

	if (*head != NULL)
	{
		while ((*temp).next != NULL)
			temp = temp->next;
		(*temp).next = new;
		(*new).prev = temp;
	}
	else
	{
		*head = new;
	}
	return (new);
}
