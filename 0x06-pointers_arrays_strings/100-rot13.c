#include "main.h"
/**
 * rot13 - encode string in rot13
 * @c: Character to be rotated
 * Return: c(Rotaated Character)
 */

char *rot13(char *c)
{
	int src[53] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		      'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		      'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		      'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
		      'S', 'T', 'U', 'V','W', 'X', 'Y', 'Z'};
	int rot[53] ={'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		      'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		      'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		      'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
		      'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int i;/*loop through rot13 array(rot)*/
        int j;/*For the loop through string*/

	for (j = 0; c[j] != '\0'; j++)
	{
		i = 0;
		while (src[i] != '\0' && c[j] != src[i])/*loop through rot13 */
			i++;

		if (c[j] == src[i])
			c[j] = rot[i];
	}

	return (c);
}
