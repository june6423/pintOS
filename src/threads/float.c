#define FRACTION (1<<14)

#include "threads/float.h"


int int_to_fp (int n){
  return n * FRACTION;
}

int fp_to_int (int x){
  return x / FRACTION;
}

int fp_to_int_round(int x){
  if (x>=0) return (x+FRACTION/2)/FRACTION;
  else return (x - FRACTION/2)/FRACTION;
}

int add_fp(int x, int y){
	return x+y;
}

int add_mixed(int x, int n){
	return x + n*FRACTION;
}

int sub_fp(int x, int y){
	return x-y;
}

int sub_mixed(int x, int n){
	return x- n*FRACTION;
}

int mult_fp(int x, int y){
	return ((int64_t)x)*y/FRACTION;
}

int mult_mixed(int x, int n){
	return x*n;
}

int div_fp (int x, int y){
	return ((int64_t)x)*FRACTION/y;
}
int div_mixed (int x, int n){
	return x/n;
}


