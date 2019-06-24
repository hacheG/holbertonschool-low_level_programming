#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 12;

	while (i < 790)
	{
		if (i % 10 == 0)
		{
			if (i == 100)
				i = 123;
			else
			{
				i > 120 ? (j = (i / 10) % 10) : (j = i / 10);
				i += j + 1;
			}
		}
		if (i % 100 == 0)
		{
			j = i / 100;
			i += j * 10 + j + 12;
		}
		putchar(i / 100 % 10 + '0');
		putchar(i / 10 % 10 + '0');
		putchar(i % 10 + '0');
		if (i < 789)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
