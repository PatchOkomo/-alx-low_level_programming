#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long prime;

	for (prime = 2; prime < number; prime++)
	{
		if ((number % prime) == 0)
		{
			number /= prime;
			prime = 2;
		}

		else
		{
			prime++;
		}
	}

	printf("%lu", prime);

	return (0);
}
