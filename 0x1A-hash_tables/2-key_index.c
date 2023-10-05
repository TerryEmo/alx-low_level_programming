#include "hash_tables.h"

/**
 * key_index - Generate the index of key/value
 * paired values should be stored in array of a hash table
 * @key: The key to generate the index of
 * @size: Size of the array of the hash table
 * Return: Index of the key
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
