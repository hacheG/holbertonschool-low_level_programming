#include "holberton.h"
/**
 * swap_int - Check if a number is greater than 0
 * @a: The number to be checked
 * @b: Second operand
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *b;
	*b = *a;
	*a = aux;
}
