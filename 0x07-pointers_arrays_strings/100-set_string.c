#include "main.h"

/**
 * set_string - A function used to sets the value of a pointer to a char
 * @s: source adress we are setting from.
 * @to: target adress we are setting to.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
