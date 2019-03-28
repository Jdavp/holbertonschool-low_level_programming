#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *free_list - add a news nodes at the end
 *@head: initial pointer
 *
 *
 *Return: counter of nodes
 */


void free_list(list_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
		head = NULL;
}
