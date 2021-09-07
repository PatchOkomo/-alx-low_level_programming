#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * gen_pwd - generates a random password for the program 101-crackme
 * @n: length of password to be generated
 * Return: None(void function)
 */

void pwd_gen(int n)
{
	int i;
	int randomizer = 0;
	char numbers[] = "0123456789";
        char letter[] = "abcdefghijklmnoqprstuvwxyz";
        char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUVWXYZ";
        char symbols[] = "!@#$^&*?";
        char password[n];

	/* Seed the random-number generator
	 * with current time so that the
	 * numbers will be different every time*/
	srand((unsigned int)(time(NULL)));
	randomizer = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main(void)
{
	int n = 12;

	pwd_gen(n);
	printf("\n");

	return (0);
}
