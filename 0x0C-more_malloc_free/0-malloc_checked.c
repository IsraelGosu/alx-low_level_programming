#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: amount of bytes.
 *
 * Return: a pointer to the allocated memory.
 * if the malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
