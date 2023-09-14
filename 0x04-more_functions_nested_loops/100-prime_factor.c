#include <stdio.h>

/**
 * main - This code will prints largest prime factor of the number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	long int n, ph;

	n = 612852475143;
	for (ph = 2; ph <= n; ph++)
	{
		if (n % ph == 0)
		{
			n /= ph;
			ph--;
		}
	}
	printf("%ld\n", ph);
	return (0);
}
