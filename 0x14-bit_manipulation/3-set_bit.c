#include "main.h"

/**
 * set_bit - A function that sets the given
 * value of a bit to 1. at a given index.
 * @n: the pointer of an unsigned long int.
 * @index: the index of the bit.
 * Return: 1 if its works, or a -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
