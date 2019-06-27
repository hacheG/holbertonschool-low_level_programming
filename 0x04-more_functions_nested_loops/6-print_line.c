#include "holberton.h"
/**
 * print_line - Check if a number is greater than 0
 * @n: The number to be checked
 *
 *
 */
void print_line(int n)
{
	int a = 0;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a != n)
		{
			_putchar(95);
			a++;
		}
		_putchar('\n');
	}
}
