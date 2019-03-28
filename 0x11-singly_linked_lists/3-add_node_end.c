#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - function returns the length of a string
 *
 *length of a string
 *
 *@s: pointer
 *
 *Return: return string length
 **/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

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
	new->len = _strlen(new->str);
	new->next = NULL;
	if (new->str == NULL)
	{
		free(new->str);
		return (NULL);
	}

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
