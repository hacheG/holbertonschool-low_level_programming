#include "holberton.h"
<<<<<<< HEAD

/**
* _strncat - concat with a character
* @dest: dest
* @src: to concate
* @n: num to characters
* Return: concat string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
=======
/**
 * _strcat - Check if a number is greater than 0
 * @dest: The number to be checked
 * @src: The number to be checked
 * Return: concate strings
 */
char *_strcat(char *dest, char *src)
{
	int a, b, i, j;
	int coun = 0;
	int coun2 = 0;

	for (a = 0; dest[a] != 0; a++)
	{
		coun = coun + 1;
	}

	for (b = 0; src[b] != 0; b++)
	{
		coun2 = coun2 + 1;
	}

	for (i = coun, j = 0; j < coun2; i++, j++)
	{
		dest[i] = src[j];
	}
	
>>>>>>> ccebe679be9a4beba0650b6f29840f8229d38cce
