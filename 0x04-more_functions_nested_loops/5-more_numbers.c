#include "holberton.h"
#include <unistd.h>
/**
 * more_numbers - Prints "Hello"
 */
void more_numbers(void)
{
	int c = 1;
	int ot;

	while (c <= 10)
	{
		int n = 48;

		while (n <= 57)
		{
			_putchar(n);
			n++;
		}
		ot = 0;

		while (ot < 5)
		{
			write(1, "1", 1);
			_putchar (ot % 10 + '0');
			ot++;
		}
		_putchar('\n');
		c++;
	}
}
