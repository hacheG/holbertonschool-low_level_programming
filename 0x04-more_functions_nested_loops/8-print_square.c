#include "holberton.h"
/**
 * print_square - Check if a number is greater than 0
 * @size: The number to be checked
 *
 */
void print_square(int size)
{
	int a;
	int size2, size1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		size1 = size;
		while (size1)
		{
			a = 0;
			size2 = size;
			while (a != size2)
			{
				_putchar(35);
				a++;
			}
			size1--;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
