#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: pointer to an int array
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int aux = 0;
	size_t i = 0, counter = 0;

	while (i < size)
	{
		if (array[i + 1] && array[i + 1] < array[i])
		{
			aux = array[i + 1];
			array[i + 1] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
		i++;
		if (i == size)
		{
			i = 0;
			counter++;
		}
		if (counter == size)
			break;
	}
}
