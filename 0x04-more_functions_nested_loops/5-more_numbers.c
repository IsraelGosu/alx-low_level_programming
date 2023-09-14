#include "main.h"

/**
 * more_numbers - This function or code print out numbers between 0 to 14
 * 10 times on different lines.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, cc;

	for (i = 0; i < 10; i++)
	{
		for (cc = 0; cc < 15; cc++)
		{
			if (cc >= 10)
				_putchar((cc / 10) + 48);
			_putchar((cc % 10) + 48);
		}
		_putchar('\n');
	}
}
