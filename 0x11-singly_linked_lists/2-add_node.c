#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *add_node - add a new node
 *@head: initial pointer
 *@str: original string value
 *
 *Return: pointer of new node
 */


list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		{	free(new);
		return (NULL);
	}
	(*new).str = strdup(str);

	while (str[i])
	{
		i++;
	}
	(*new).len = i;
	(*new).next = *head;
	*head = new;
	return (new);
}
