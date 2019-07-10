#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - print a bidimencional string
 * @a: string to print
 **/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
