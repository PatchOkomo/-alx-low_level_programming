#include "main.h"
#include <stdlib.h>

/**
 * argstostr - seperate words from a string
 * @ac: argument counter
 * @av: arguments 2D array
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int row;
	int col;
	int c;
	int i = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			c++;
		}
	}
	str = malloc(sizeof(char) * (c + ac + 1));
	if (str == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			str[i] = av[row][col];
			i++;
		}
		str[i] = '\n';
		i++;
	}
	return (str);

}
