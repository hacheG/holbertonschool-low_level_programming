#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - call functions to print answer
 * @argc: num of arg
 * @argv: atguments
 * Return: 0 or errors
 */
int main(int argc, char **argv)
{
	char aux = argv[2][0];
	int a = 0, num1 = 0, num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (aux != '+' && aux != '-' && aux != '*'
	     && aux != '/' && aux != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[3]);

	a = (get_op_func(argv[2]))(num1, num2);

	printf("%d\n", a);
	return (0);
}
