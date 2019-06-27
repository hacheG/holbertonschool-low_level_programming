#include "holberton.h"
/**
 * print_most_numbers - Prints "Hello"
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if ((n == 50) || (n == 52))
		{
			n++;
		}
		else
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
