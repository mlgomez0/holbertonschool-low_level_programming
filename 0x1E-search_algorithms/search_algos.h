#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_mod(int *array, int l, int r, int value);
int advanced_binary(int *array, size_t size, int value);
int recursive_search(int *array, int l, int r, int value);
void binary_print(int *array, int l, int r);

#endif
