#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two string
 * @s1: first string
 * @s2: second string
 * Return: new string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *s;

	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}

	j = 0;
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		s[l + k] = s2[l];
	}
	s[l + k + 1] = '\0';
	return (s);
}
