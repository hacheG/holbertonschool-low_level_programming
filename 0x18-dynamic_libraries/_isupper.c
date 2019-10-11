#include "holberton.h"

/**
 *_isupper - checks for uppercase characters
 *@c: uppercase alphabet
 *Return: 1 if c is uppercase
 *Return 0 otherwise
 */
int _isupper(int c)
{

  if ((c >= 'A') && (c <= 'Z'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
