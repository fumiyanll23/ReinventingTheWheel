/* Compute factorial */

#include <stdio.h>

int factorial(int x);

int main(void){
  int n;

  printf("Input n: "); scanf("%d", &n);
  printf("%d! = %d\n", n, factorial(n));

  return 0;
}

int factorial(int x){
  if(x <= 0){
    return 1;
  }
  else{
    return x * factorial(x - 1);
  }
}
