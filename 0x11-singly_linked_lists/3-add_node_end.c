#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *add_node_end - add a new node at the end
 *@head: initial pointer
 *@str: original string value
 *
 *Return: pointer of new node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;
	if (*head != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		(*temp).next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
