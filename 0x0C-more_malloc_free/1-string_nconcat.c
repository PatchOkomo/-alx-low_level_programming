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
	char *con;/*Concatenation variable*/
	unsigned int z;/*Length variable*/
	unsigned int i;/*index variable*/

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		z++;

	con = malloc(sizeof(char) * (z + 1));

	if (con == NULL)
		return (NULL);
	z = 0;

	for (i = 0; s1[i]; i++)
		con[z++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		con[z++] = s2[i];

	con[z] = '\0';

	return (con);
}
