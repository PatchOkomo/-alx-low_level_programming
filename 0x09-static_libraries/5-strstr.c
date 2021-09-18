#include "main.h"
#define NULL 0
/**
 * _strstr - finds first occurrence of needle in haystack and returns it
 * @haystack: String to be checked
 * @needle: String to check for
 * Return: pointer to beginning of  needle, The string being searched for
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);/*In case of a mismatch*/
}
