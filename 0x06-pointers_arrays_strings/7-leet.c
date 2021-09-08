#include "main.h"
/**
 * leet - encodes characters to LEET(1337)
 * @c: Character to be converted
 * Return: c(Leeted char)
 */

char *leet(char *c)
{
	int orig[11] = {'a','A','e','E','o','O','t','T','l','L'};
	int con[11] = {'4','4','3','3','0','0','7','7','1','1'};
	int i;/*cycle through leet code*/
	int j;/*cycle through string*/

	for (j = 0; c[j] != '\0'; j++)
	{
		for (i = 0; orig[i] != '\0'; i++)
		{
			if (c[j] == orig[i])
				c[j] = con[i];
		}
	}
	return (c);
}
