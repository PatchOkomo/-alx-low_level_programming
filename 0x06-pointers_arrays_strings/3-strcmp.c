#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: spaces difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')/*Strings endpoints not reached*/
	{
		if (*s1 != *s2)/*If the elements of strings are different*/
			return (*s1 - *s2);/*Get difference*/
		s1++;/*Iterate index*/
		s2++;
	}
	return (0);
}
