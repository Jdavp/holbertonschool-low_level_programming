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


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head != NULL)
		(*head)->prev = new;

	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;
	*head = new;

	return (new);
}
