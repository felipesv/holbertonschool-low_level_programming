#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_recursion(int *array, int value, size_t from, size_t to);
void print_array(int *array, size_t from, size_t to);
int advanced_binary(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int min(int x, int y);


#endif /* SEARCH_ALGOS_H */
