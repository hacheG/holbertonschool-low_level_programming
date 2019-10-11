#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: lenght of string
 */
int _strlen(char *s)
{
  int count;
  count = 0;
  while (s[count] != '\0')
    count++;
  return (count);

}
