#include "main.h"

/**
 * string_toupper - converts lowercase characters to uppercase characters
 * @c: characters to be converted
 * Return: c(Uppercase characters)
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)/*omits the null terminator if c exists*/
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 'a' + 'A';
		}
	}
	return (c);
}
