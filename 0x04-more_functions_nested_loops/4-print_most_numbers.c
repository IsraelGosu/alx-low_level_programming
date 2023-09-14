#include "main.h"

/**
 * print_most_numbers - A function or code to print numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int cc;

	for (cc = 48; cc < 58; cc++)
	{
		if (cc != 50 && cc != 52)
			_putchar(cc);
	}
	_putchar('\n');
}
