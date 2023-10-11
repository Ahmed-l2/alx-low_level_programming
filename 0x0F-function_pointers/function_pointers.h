#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_name(char *name, void (*f)(char *));

#endif
