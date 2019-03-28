#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *free_listint - add a news nodes at the end
 *@head: initial pointer
 *
 *
 *Return: counter of nodes
 */


void free_listint(listint_t *head)
{
	if (!head)
	{
		free_listint(head->next);
		head = NULL;
	}
}
