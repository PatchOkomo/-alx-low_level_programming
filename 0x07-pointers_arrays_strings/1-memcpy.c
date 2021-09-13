#include "main.h"
/**
 * _memcpy - copies n bytes of src to dest
 * @dest: Destination copy
 * @src: Source of the copy
 * @n: Number of bytes to be copied
 * Return: pointer to dest, copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size;
	int count;

	size = n;
	if (size > 0)
	{
		for (count = 0; count <= size; count++)
			dest[count] = src[count];
	}

	return (dest);
}
