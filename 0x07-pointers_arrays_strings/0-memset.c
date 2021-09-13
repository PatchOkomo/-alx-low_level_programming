#include "main.h"
/**
 * _memset - fills the first n bytes of memory area pointed to by s with b
 * @s: memory area to be filled
 * @b: constant bytes to fill up the memory spaces
 * @n: number of bytes to be filled
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	int count;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
			s[count] = b;
	}

	return (s);
}
