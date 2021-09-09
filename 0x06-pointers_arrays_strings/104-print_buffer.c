#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byte;/*Byte to be printed*/
	int i;/*index bytes and limit to 10*/

	if (size == 0)
	{
		printf("\n");
	}
	/* print size chars from b */
	for (i = 0; i <= size; ++i)
	{
		/*Prints 1st hex byte*/
		if (i % 10 == 0)
			printf("%08x:", i);
		/*print hex content*/
		if (i % 2)
			printf("%02x%02x", b[i - 1], b[i]);
		else
			printf(" ");
		if (i % 10 == 9)
		{
			printf(" ");
			for (byte = (i - 9); byte <= i; ++byte)
			{
				if (isprint(b[byte]))
					printf("%c", b[byte]);
				else
					printf(".");
			}
			printf("\n");
		}
	}
	printf("\n");
}
