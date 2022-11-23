#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element of the hash table
 *
 * @key: is the key
 * @value: is the value associated with the key.
 * @ht: is the hash table you want to add or update the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (key == NULLi || node == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->value);
		return (0);
	}

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else if (strcmp(node->key, key) == 0)
		strcpy(ht->array[index]->value, value);
	
	return (1);
}
