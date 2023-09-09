#include "hash_tables.h"
/**
 * key_index - to get the index of a key in hash table
 * @key: the key you want to get index of
 * @size: size of the hash-table
 *
 * Return: the index of the key:value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
