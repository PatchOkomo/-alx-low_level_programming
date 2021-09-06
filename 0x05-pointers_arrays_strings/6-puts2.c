#include "main.h"
/**
 * puts2 - prints even integers
 * @str: integer to be checked
 * Return: None
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if ((*str % 2) == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
