#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash-table
 * @ht: the hash table to update the key:value to
 * @key: it is the key
 * @value: the value to be added
 *
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	val_copy = strdup(value);
	if (!val_copy)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_copy;
				return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(val_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
