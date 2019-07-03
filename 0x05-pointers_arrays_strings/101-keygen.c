#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - generates passwords of random value
 *
 * Return: 0 always.
 */
int main(void)
{
	int randomchar, sum = 0;

	srand(time(0));
	while (sum < 2772 - 127)
	{
		randomchar = rand() % 127;
		if (randomchar > 32)
		{
			putchar(randomchar);
			sum += randomchar;
		}
	}
	putchar(2772 - sum);
	return (0);
}
