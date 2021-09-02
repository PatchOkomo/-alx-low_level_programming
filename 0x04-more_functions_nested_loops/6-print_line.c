#include "main.h"

/**
 * print_line - prints __ ending with a new line
 *
 * Return: none(void function)
 */

void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
