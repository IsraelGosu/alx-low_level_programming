#include "main.h"
#include <stdlib.h>
/**
 * _strdup - This function returns a pointer to a newly
 * allocated space in memory,that has a copy of the string
 * given as the parameter
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int g, k;

	if (str == NULL)
		return (NULL);

	for (g = 0; str[g] != '\0'; g++)
		;

	strout = (char *)malloc(sizeof(char) * (g + 1));

	if (strout == NULL)
		return (NULL);

	for (k = 0; k <= g; k++)
		strout[k] = str[k];

	return (strout);
}
