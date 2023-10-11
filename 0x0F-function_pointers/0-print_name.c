#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: this inputs the name.
 * @f: the function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
