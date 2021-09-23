#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at most n of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: NULL if fn fails, pointer to the concatenated mem space otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1;
	unsigned int len2;
	unsigned int i1;
	unsigned int i2;

	p = NULL;
	len1 = 0;
	if (s1)
	{
		for (len1 = 0; s1[len1]; len1++)
			continue;
	}
	len2 = 0;
	if (s2)
	{
		for (len2 = 0; s2[len2]; len2++)
			continue;
	}
	if (n < len2)
		len2 = n;
	p = malloc(len1 + len2 + 1);
	if (p)
	{
		for (i1 = 0; (i1 < len1) && s1; i1++)
			p[i1] = s1[i1];
		for (i2 = 0; (i2 < len2) && s2; i2++)
			p[i1 + i2] = s2[i2];
		p[i1 + i2] = 0;
	}
	else
	{
		free(p);
		p = NULL;
	}
	return (p);
}
