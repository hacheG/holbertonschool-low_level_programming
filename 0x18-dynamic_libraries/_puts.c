#include "holberton.h"

/**
 *_puts - print a string
 *@str: string
 *Return: 0
 */
void _puts(char *str)
{
  int s;
  s = 0;

  while (str[s] != '\0')
    {
      _putchar(str[s]);
      s++;
    }
  _putchar('\n');
}
