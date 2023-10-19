#include <stdio.h>
/**
 * bmain - A function that prints a given
 * sentence and executed before main
 * Return: has no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
