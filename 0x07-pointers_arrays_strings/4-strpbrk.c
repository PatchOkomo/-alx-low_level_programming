#include "main.h"
#define NULL 0

/**
 * _strpbrk - locates the first occurrence in the string s of any of the
 *  bytes in the string accept
 * @s: string to search
 * @accept: target matches
 * Return: Pointer to ndex of first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)/*Iterate through the string*/
	{
		for (j = 0; accept[j] != '\0'; j++)/*Iterate through target*/
		{
			if (s[i] == accept[j])/*CHeck for first match*/
			{
				s = &s[i];/*Setting the pointer*/
				return (s);
			}
		}
	}
	return (NULL);/*In case of no matches*/
}
