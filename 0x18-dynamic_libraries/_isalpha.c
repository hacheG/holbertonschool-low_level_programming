#include "holberton.h"

/**
 *_isalpha - checks for lowercase characters
 *@c: alphabet character
 *Return: 1 if c is an alphabet character
 *Return 0 otherwise
 */
int _isalpha(int c)
{

  if ((c >= 'a') && (c <= 'z'))
    {
      return (1);
    }
  else if ((c >= 'A') && (c <= 'Z'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
