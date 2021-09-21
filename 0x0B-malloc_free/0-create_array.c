#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array with specific strin
 * @size: lenght of array
 * @c: string
 * Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	/*Counter*/
	unsigned int i;
	/*malloc pointer*/
	char *str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
