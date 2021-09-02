#include <stdio.h>

/**
 * main - prints 1 - 100 with multiples of 3 having fizz
 * and multiples of 5 buzz and multiples of both FizzBuzz
 *
 * Return: always 0(Success)
 */

int main(void)
{
	int x = 3;
	int y = 5;
	int i;/*counter*/

	for (i = 1; i <= 100; i++)
	{
		if ((i % x) == 0)
			printf("Fizz ");

		else if ((i % y) == 0)
			printf("Buzz ");

		else if (((i % x) == 0) && ((i % y) == 0))
			printf("FizzBuzz ");

		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
