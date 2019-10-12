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
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	else
	{
		newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

		if (newNode == NULL)
		{
			return (0);
		}

		newNode->key = strdup(key);
		newNode->value = strdup(value);
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
		return (1);
	}
}
