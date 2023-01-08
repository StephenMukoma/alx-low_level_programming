#include "hash_tables.h"
/**
*key_index - generates index
*
*@key: key to assign index
*@size: size of hashtable
*
*Return: key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
