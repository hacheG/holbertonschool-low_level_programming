#include "hash_tables.h"
/**
 * key_index - check the code for Holberton School students.
 * @key: var1
 * @size: var2
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);

}
