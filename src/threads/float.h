#ifndef THREADS_FLOAT_H
#define THREADS_FLOAT_H

#include <stdint.h>  // For int64_t


/* Conversion functions */
int int_to_fp(int n);
int fp_to_int(int x);
int fp_to_int_round(int x);

int add_fp(int x, int y);
int add_mixed(int x, int n);
int sub_fp(int x, int y);
int sub_mixed(int x, int n);
int mult_fp(int x, int y);
int mult_mixed(int x, int n);
int div_fp(int x, int y);
int div_mixed(int x, int n);

#endif
