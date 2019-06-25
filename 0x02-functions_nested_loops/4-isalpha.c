#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 123))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
