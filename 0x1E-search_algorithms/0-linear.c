#include "search_algos.h"

/**
 * linear_search - searches for a value 
 * @array: linear_search
 * @size: linear_search
 * @value: linear_search
 * Return: linear_search
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
