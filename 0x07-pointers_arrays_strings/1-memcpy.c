#include "main.h"
/**
 * _memcpy - this function copies memory area,
 * @dest: this is the destination memory area its copying to.
 * @src: this is source memory area its copying from.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
