#include "main.h"

/**
 * _strchr - locates a character in a set
 * @s: string being checked
 * @c: Character to be checked
 * Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
