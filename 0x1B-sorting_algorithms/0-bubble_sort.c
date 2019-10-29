#include "sort.h"

/**
 * bubble_sort - Prints a list of integers
 *
 * @array: The list to be printed
 * @size: the size of array
 */

void bubble_sort(int *array, size_t  size)
{
	unsigned int i, j, aux;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
