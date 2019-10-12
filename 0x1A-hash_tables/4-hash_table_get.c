#include "hash_tables.h"
/**
 * hash_table_get - function
 * @ht: variable
 * @key: variable
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL && node->key != NULL && strcmp(key, node->key) > 0)
		node = node->next;

	if (node == NULL || node->key == NULL || strcmp(key, node->key) != 0)
		return (NULL);
	else
		return (node->value);
}