#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
