#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		/* print size chars from b */
		for (i = 0; i < size; i++)
		{
			/*Prints 1st hex byte*/
			printf("%.8x:", j);
			/*print hex content*/
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
			}
			/*print buffer content*/
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
	printf("\n");
}
