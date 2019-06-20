#include <stdio.h>

/**
 * main - more headers goes there
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 72 ; i++)
	{
		if (i == 58 || i == 59 || i == 60 || i == 61 || i == 62 || i == 63 || i == 64)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
