#include "main.h"

/**
 * _print_rev_recursion - This function also prints
 * a string in reverse as seen in previous projects.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
