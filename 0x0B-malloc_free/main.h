#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *_strncat(char *dest, char *src);

#endif /* _MAIN_H_ */
