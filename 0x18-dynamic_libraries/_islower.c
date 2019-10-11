#include "holberton.h"

/**
 *_islower - checks for lowercase characters
 *@c: lowercase alphabet
 *Return: 1 if c is lowercase
 *Return 0 otherwise
 */
int _islower(int c)
{

  if ((c >= 'a') && (c <= 'z'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
