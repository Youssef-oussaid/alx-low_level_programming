#include "hash_tables.h"

/**
 * key_index - gives the index of key
 * @key: key to get the index for
 * Return: index for the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
