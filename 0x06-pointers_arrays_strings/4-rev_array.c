#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: poinetr to array of ints
* @n: number of elements of the array
* Return: nothing
**/

void reverse_array(int *a, int n)
{
	int i, tmp, limit;

	if (n > 1)
	{
		i = 0;
		if (n % 2 != 0)
		{
			limit = n + 1;
		}

		for (i = 1; i < limit / 2; i++)
		{
			tmp = a[i - 1];
			a[i - 1] = a[n - i];
			a[n - i] = tmp;
		}
	}
}
