#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: size
 * Return: a pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (newHash == NULL)
	{
		return (NULL);
	}
	newHash->size = size;
	newHash->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (newHash->array == NULL)
	{
		free(newHash);
		return (NULL);
	}
	return (newHash);
}
