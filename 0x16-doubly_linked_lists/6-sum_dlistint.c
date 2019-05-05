#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *sum_dlistint - sum of list
 *@head: initial pointer
 *Return: index of node
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += (*head).n;
		head = head->next;
	}
	return (add);
}
