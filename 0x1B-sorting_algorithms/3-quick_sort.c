#include "sort.h"

/**
 * swap - Prints an array of integers
 *
 * @a: The array to be printed
 * @b: Number of elements in array
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - Prints an array of integers
 *
 * @arr: The array to be printed
 * @low: number low
 * @high: number high
 * @size: Number of elements in array
 * Return: retrn function
 */

int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if ((i + 1) != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}

/**
 * quickSort - Prints an array of integers
 *
 * @arr: The array to be printed
 * @size: Number of elements in array
 * @low: number low
 * @high: number high
 */

void quickSort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in array
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;

	if (!array || size < 2)
		return;
	quickSort(array, low, size - 1, size);
}
