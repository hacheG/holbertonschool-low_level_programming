#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n number of indexes of an array
 * @a: input array
 * @n: input num of indexes to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
		printf("%d%s", a[c], c < n - 1 ? ", " : "");
	printf("\n");
}
