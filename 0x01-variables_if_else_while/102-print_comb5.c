#include <stdio.h>
/**
 * main - Entry Point, Printing possible combination of two two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int m;
	int n = '0';

	for (i = '0'; i <= '9'; i++) /*print first two digit combo*/
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (m = i; m <= '9'; m++) /*print second digit combo*/
			{
				do
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);

					if (!((i == '9' && j == '8') &&
					      (m == '9' && n == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					n++;
				}
				while ((n = j + 1));
				n = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
