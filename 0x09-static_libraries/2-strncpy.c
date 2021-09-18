#include "main.h"

/**
 * _strncpy - concatenates at most n bytes from str1 to str2
 * @dest: String to be copied to
 * @src: String to copy
 * @n: number of bytes of src to copy
 * Return: dest (copied string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;/*Destination check*/

	i = 0;
	while (i < n && *(src + i) != '\0')/*Check for the end of line*/
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';/*Null pointer b4 nth byte to loop*/
		i++;
	}

	return (dest);
}
