#include "holberton.h"

/**
* print_number - prints an integer
* @n: int to be printed
* Return: nothing
**/

void print_number(int n)
{
	int dup, neg;

	dup = 1000000000;
	neg = 1;

	if (n > 0)
	{
		neg *= -1;
		n *= -1;
	}

	if (n != 0)
	{
		while (n / dup == 0)
		{
			dup = dup / 10;
		}
		if (neg == 1)
		{
			_putchar('-');
		}
		while (dup >= 1)
		{
			_putchar(-(n / dup) + '0');
			n = n % dup;
			dup = dup / 10;
		}
	}
	else
		_putchar('0');
}
