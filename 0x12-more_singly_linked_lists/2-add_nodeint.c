#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *listint_len - return nodes
 *@h: initial pointer
 *
 *
 *Return: counter of nodes
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int a = n;

	/*if (new == NULL)
	{
		free(new);
		return(NULL);
		}*/
	(*new).n = a;
	(*new).next = *head;
	/**head = NULL;*/
	return (new);
}
