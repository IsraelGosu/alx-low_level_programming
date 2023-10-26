#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: a 0 if big endian, or a 1 if little endian
 */
int get_endianness(void)
{
	unsigned int g;
	char *k;

	g = 1;
	k = (char *) &g;

	return ((int)*k);
}
