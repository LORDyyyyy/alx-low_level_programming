#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(X, Y) ((X <= Y) ? (X) : (Y))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_rl(int *array, int value, size_t left, size_t right);
int exponential_search(int *array, size_t size, int value);


#endif
