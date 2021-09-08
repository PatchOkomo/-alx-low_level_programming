#include "main.h"

/**
 * cap_string -capitalizes the first letter of a string
 * @c: string to be capitalized
 * Return: c, The capitalized string
 */

char *cap_string(char *c)
{
	int i;

	i = 0;
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 'a' + 'A';
	i++;

	while (c[i] != '\0')
	{
		if ((c[i] >= 'a' && c[i] <= 'z')
		    && (c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.' ||
			c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' ||
			c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' ||
			c[i - 1] == '}' || c[i - 1] == ' ' || c[i - 1] == '\t'
			|| c[i - 1] == '\n'))
			c[i] = c[i] - 'a' + 'A';
		i++;
	}

	return (c);
}
