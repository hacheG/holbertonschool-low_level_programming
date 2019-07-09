#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * Description: print sum 2 diagonals (square matrix)
 * @a: matrix int
 * @size: sizeof matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int dsum = 0;
	int usum = 0;

	for (x = 0; x < size; x++)
	{
		dsum += *(a + ((size * x) + x));
		usum += *(a + (size - 1) * (x + 1));
	}
	printf("%d, %d\n", dsum, usum);
}
