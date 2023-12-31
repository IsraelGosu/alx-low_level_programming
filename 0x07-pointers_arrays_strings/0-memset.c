#include "main.h"
/**
 * _memset - Below is function that fills memory with a constant byte,
 * @s: this is memory area.
 * @b: the constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
