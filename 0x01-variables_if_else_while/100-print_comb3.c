#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 1;

	while (i < 90)
	{
		if (i % 10 == 0)
		{
			j = i / 10;
			i += j + 1;
		}
		putchar(i / 10 % 10 + '0');
		putchar(i % 10 + '0');
		if (i < 88)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
