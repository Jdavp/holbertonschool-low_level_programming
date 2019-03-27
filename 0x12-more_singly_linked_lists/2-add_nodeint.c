#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint - add a news nodes to the begin
 *@head: initial pointer
 *@n:numbers
 *
 *Return: counter of nodes
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).n = n
;
	(*new).next = *head;
	*head = new;
	return (new);
}
