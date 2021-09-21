#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/*0*/
char *create_array(unsigned int size, char c);
/*1*/
char *_strdup(char *str);
/*2*/
char *str_concat(char *s1, char *s2);
/*3*/
int **alloc_grid(int width, int height);
/*4*/
void free_grid(int **grid, int height);
/*100*/
char *argstostr(int ac, char **av);
/*101*/
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
#endif/*_MAIN_H_*/
