#include "hash_tables.h"

/**
 *hash_table_set - function
 *@ht: variable
 *@key: variable
 *@value: variable
 *Return: value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (newNode == NULL)
	{
		return (0);
	}

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	ht->array[index]->value = strdup(value);
	return (1);



}
