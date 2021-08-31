#include "main.h"
/**
 * _islower - Checks for lowercase characters
 * @c: The character to check
 * Return: 1 if c is lowercase 0 otherwise(uppercase)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}
