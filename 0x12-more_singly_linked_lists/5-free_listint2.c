#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *free_listint2 - frees all the nodes
 *@head: initial pointer
 *
 *
 *Return: counter of nodes
 */


void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
		*head = NULL;
}
