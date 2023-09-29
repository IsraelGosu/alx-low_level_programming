#include "main.h"
/**
 * _strcmp - This function is used to compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, yu = 0;

	while (yu == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		yu = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (yu);
}
