#include "sort.h"

/**
 * selection_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, aux, min;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		aux = array[i];
		array[i] = array[min];
		array[min] = aux;
		print_array(array, size);
	}
}
