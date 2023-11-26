#include "main.h"

/**
 * clear_bit - sets bits to zero
 * @n: a ptr to a long int
 * @index: the index of a long int
 * Return: 1 if successful and -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(n) * 8)
        return (-1);
    return (!!(*n &= 0L << index));
}
