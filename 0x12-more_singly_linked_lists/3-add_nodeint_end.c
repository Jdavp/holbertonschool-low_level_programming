#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint_end - add a news nodes at the end
 *@head: initial pointer
 *@n:numbers
 *
 *Return: counter of nodes
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).n = n;
	(*new).next = NULL;

	if (*head != NULL)
	{
		while ((*temp).next != NULL)
		temp = temp->next;
		(*temp).next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
