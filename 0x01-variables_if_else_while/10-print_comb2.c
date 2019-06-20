#include <stdio.h>

/**
 * main - more headers goes there
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 49;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (i == 57 && j == 57)
			{
				putchar (i);
				putchar (j);
				break;
			}
			putchar (i);
			putchar (j);
			putchar (',');
		}
	}
	return (0);
}
