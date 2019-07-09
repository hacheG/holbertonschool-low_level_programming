char *_strchr(char *s, char c)
#include "holberton.h"
/**
 * _memcpy - Makes the sum of two numbers
 * @dest: First operand
 * @src: Second operand
 * @n: Second operand
 *
 * Return: The sum of the two parameters
 */
{
        int i,j;


        for (i = 0; s[i] != '\0'; i++)
        {
		s++;
		if (s[i] == c || s[i] > c)
		{
			return(s);
		}

        }
        return ('\0');
}
