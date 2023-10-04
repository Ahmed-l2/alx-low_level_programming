#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);

#endif
