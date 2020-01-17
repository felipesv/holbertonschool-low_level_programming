#include "hash_tables.h"

/**
 * key_index - create a key to store in hash table
 *
 * Return: key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        unsigned long int key_hash = 0;
        unsigned long int dbj2 = 0;

        dbj2 = hash_djb2(key);
        key_hash = dbj2 % size;
        return (key_hash);
}