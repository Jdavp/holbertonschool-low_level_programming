#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the insertion sort algorithm
 * @array: pointer to an int array
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int index = 0, min = 0;
	size_t i = 0, counter = 0;

	if (size < 2)
		return;
	min = array[i];
	while (counter < size - 1)
	{
		i++;
		if (array[i])
		{
			if (array[i] < min)
			{
				min = array[i];
				index = i;
			}
			continue;
		}
		if (array[counter] != min)
		{
			array[index] = array[counter];
			array[counter] = min;
			print_array(array, size);
		}
		counter++;
		i = counter;
		min = array[i];
	}
}
