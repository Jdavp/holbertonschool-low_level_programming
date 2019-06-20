#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using the Shell
 * sort algorithm, using the Knuth sequence
 * @array: pointer to an int array
 * @size: size of the array
 * Return: Always 0
 */
void shell_sort(int *array, size_t size)
{
	int interval = 0, out = 0, value = 0, inn = 0;

	while (interval < (int)size / 3)
		interval = interval * 3 + 1;
	if (interval == 0)
		interval = 1;

	while (interval > 0)
	{
		out = interval;
		while (out < (int)size)
		{
			value = array[out];
			inn = out;
			while (inn > interval - 1 && array[inn - interval] >= value)
			{
				array[inn] = array[inn - interval];
				inn = inn - interval;
			}
			array[inn] = value;
			out++;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}

