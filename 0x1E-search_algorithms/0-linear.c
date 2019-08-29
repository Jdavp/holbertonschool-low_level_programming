#include "search_algos.h"
/**
 *linear_search - searches for a value in an array of integers using the Linear
 *search algorithm
 *@array:pointer to the first element of the array to search in
 *@size:size is the number of elements in array
 *@value:the value to search for
 *Return: return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		if (array[n] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", n, array[n]);
			return (n);
		}
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
	}
	return (-1);
}
