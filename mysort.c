/* Sort an array */
#include <stdio.h>

void mysort (int *x, int N);

void mysort (int *x, int N) {
  int i, j;
  int tmp = 0;

  // compute
  for (i = 0; i < N; ++i) {
    for (j = 0; j < N; ++j) {
      if (x[i] < x[j]) {
        tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
      }
    }
  }
}
