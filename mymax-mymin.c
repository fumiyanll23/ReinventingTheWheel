/* Find the maximum (minimum) of an array */
#include <stdio.h>

int mymax (int *x, int N);
int mymin (int *x, int N);

int mymax (int *x, int N) {
  int i, max = 0;

  // compute
  for (i = 0; i < N; ++i) {
    if (x[i] > max) {
      max = x[i];
    }
  }

  // output
  return max;
}

int mymin (int *x, int N) {
  int i, min = 0;

  // compute
  for (i = 0; i < N; ++i) {
    if (x[i] < min) {
      min = x[i];
    }
  }

  // output
  return min;
}
