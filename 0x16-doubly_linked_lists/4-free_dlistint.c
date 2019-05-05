#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *free_dlistint - add a news nodes at the end
 *@head: initial pointer
 *
 *
 *Return: counter of nodes
 */


void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
	head = NULL;
}
