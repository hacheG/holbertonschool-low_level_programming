#include "holberton.h"
/**
 * print_diagonal - Check if a number is greater than 0
 * @n: The number to be checked
 *
 *
 */
void print_diagonal(int n)
{
	int a = 0;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a != n)
		{
			_putchar(92);
			_putchar('\n');
			a++;

			z = a;
			while (z--)
			{
				_putchar(' ');
			}
		}
	}
}
