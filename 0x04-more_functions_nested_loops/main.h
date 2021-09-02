#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */
int _putchar(char c);

/**
 *int _isupper(int c); checks whether a character is capitalized
 */
int _isupper(int c);

/**
 *int _isdigit(int c); - checks for a digit
 */
int _isdigit(int c);

/**
 *int mul(int a, int b); - multiplies two integers a and b
 */
int mul(int a, int b);

/**
 *void print_numbers(void) - print numbers 0-9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints 0-9 skipping 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers prints rows of numbers
 */
void more_numbers(void);
#endif
