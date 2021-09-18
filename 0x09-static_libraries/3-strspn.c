#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: substring to be checked
 * @accept: match hits
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int matches = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				matches++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (matches);
		}
		i++;
	}
	return (matches);
}
