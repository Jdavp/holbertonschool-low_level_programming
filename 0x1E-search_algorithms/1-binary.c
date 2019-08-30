#include "search_algos.h"
/**
 *linear_search - searches for a value in an array of integers using the Linear
 *search algorithm
 *@array:pointer to the first element of the array to search in
 *@size:size is the number of elements in array
 *@value:the value to search for
 *Return: return the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m = 0;
	size_t i = 0;
	
	while (l <= r)
	{
	  m = l + r / 2;

	  if (array[m] == value)
	    return(m);
	  
	  if (array[m] < value)
	    {
	      printf("Searching in array:");
	      while(i <= r || i >= l);
	      {
	      printf("[%d]", array[i]);
	      i++;
	      }
	      printf("\n");
	      l = m + 1;
	    }
	  if(array[m] > value)
	    { 
	      for(i = l; i > r; i++);
	      printf("Searching in array:[%d]\n", array[i]);
	      r = m - 1;
	    }
	    r = m;
	    return(m);
	}
	return (-1);
}
