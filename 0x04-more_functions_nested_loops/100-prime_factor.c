#include <stdio.h>

/**
 * main - This code will prints largest prime factor of the number 612852475143.
 * Return: 0 as Always.
 */

int main(void)
{
	long prime = 612852475143, dv;

	while (dv < (prime /2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (dv = 3; dv < (prime / 2); dv += 2)
		{
			if ((prime % dv) == 0)
				prime /= dv;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
