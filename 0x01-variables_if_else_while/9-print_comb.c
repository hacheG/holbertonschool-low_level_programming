#include <stdio.h>

/**
 * main - more headers goes there
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar (i);
		if (i == 57)
		{
			break;
		}
		putchar (',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
