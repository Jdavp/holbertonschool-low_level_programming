#include "sort.h"
#include <stdio.h>
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm with Lomuto partition scheme.
 * @array: pointer to an int array
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot = size - 1, j = 0;
	int aux = 0, i = -1;

}
size_t partition(int *array, int first, int last)
{
	int i = first - 1, j = first;

	while (j < last)
	{
		if (array[j] < array[pivot])
		{
			i++;
			aux = array[j];
			array[j] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
		j++;
	}
	i++;
	aux = array[pivot];
	array[pivot] = array[i];
	array[i] = aux;
	return(i);
}

