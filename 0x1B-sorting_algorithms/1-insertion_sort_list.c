#include "sort.h"
listint_t *change(listint_t *aux);
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to the head of the list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sup = *list, *aux = NULL;

	while (sup->next)
	{
		if (sup->next && sup->next->n < sup->n)
		{
			sup = change(sup);
			if ((*list)->prev)
				*list = (*list)->prev;
			print_list(*list);
			while (aux && aux->n > aux->next->n)
			{
				aux = change(aux);
				if (!aux->prev->prev)
					break;
				if ((*list)->prev)
					*list = (*list)->prev;
				print_list(*list);
			}
		}
		else
			sup = sup->next;
		if ((*list)->prev)
			*list = (*list)->prev;
	}
}
/**
 * change - swaps two nodes in a doubly linked list
 * @aux: pointer to the node to change
 * Return: pointer to the changed node
 */
listint_t *change(listint_t *aux)
{
	if (aux->prev)
		aux->prev->next = aux->next;
	if (aux->next->next)
		aux->next->next->prev = aux;
	aux->next->prev = aux->prev;
	aux->prev = aux->next;
	aux->next = aux->next->next;
	aux->prev->next = aux;
	if (aux->prev->prev)
		aux = aux->prev->prev;
	return (aux);
}
