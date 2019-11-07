#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
int validCounterBinary(const char *p);
int _pow_recursion(int x, int y);
void print_binary(unsigned long int n);
void _print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif /* HOLBERTON_H */
