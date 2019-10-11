#include "holberton.h"

/**
 *_isdigit - checks for digit characters
 *@c: digits 0 to 9
 *Return: 1 if c is digits
 *Return 0 otherwise
 */
int _isdigit(int c)
{

  if ((c >= '0') && (c <= '9'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
