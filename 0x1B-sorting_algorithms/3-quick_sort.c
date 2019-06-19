#include "sort.h"
#include <stdio.h>
void quick_recursion(int *array, int first, int last, size_t size);
size_t partition(int *array, int first, int last, size_t size);
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm with Lomuto partition scheme.
 * @array: pointer to an int array
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int first = 0, last = (size - 1);

	quick_recursion(array, first, last, size);
}
/**
 * partition - executes Lomuto partition scheme
 * @array: pointer to an int array
 * @first: first position of the partition
 * @last: last position of the partition
 * @size: size of the array
 * Return: int with the new position of the pivot
 */
size_t partition(int *array, int first, int last, size_t size)
{
	int i = first - 1, j = first, pivot = last, aux = 0;

	while (j < last)
	{
		if (array[j] < array[pivot])
		{
			i++;
			aux = array[j];
			array[j] = array[i];
			array[i] = aux;
			if (array[i] != array[j])
				print_array(array, size);
		}
		j++;
	}
	i++;
	aux = array[pivot];
	array[pivot] = array[i];
	array[i] = aux;
	if (array[pivot] != array[i])
		print_array(array, size);
	return (i);
}
/**
 * quick_recursion - recursive function to execute partitions sort
 * @array: pointer to an int array
 * @first: first position of the partition
 * @last: last position of the partition
 * @size: size of the array
 * Return: int with the new position of the pivot
 */
void quick_recursion(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		quick_recursion(array, first, pivot - 1, size);
		quick_recursion(array, pivot + 1, last, size);
	}
}
