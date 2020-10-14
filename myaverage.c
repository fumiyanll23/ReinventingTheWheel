/* Compute average (use only large figure) */

#include <stdio.h>
#include <stdlib.h>
#define NUM 256

double average(double x[NUM]);

int main(int argc, char *argv[]){
  double data[NUM];
  int i;

  for(i = 1; i < argc; i++){
    data[i] = atof(argv[i]);
  }

  printf("The average 0f data is %f\n", average(data[NUM]));

  return 0;
}

double average(double x[NUM]){
  int j = 1;
  double sum = 0;

  while(x[j]){
    sum += x[j];
    j++;
  }

  return sum / j;
}

/*
double average(double x[NUM]);

int main(void){
  double data[NUM] = {0};
  int i = -1;

  do{
    i++;
    printf("Input \'ONLY ONE\' data: ");
    scanf("%f", &data[i]);
  } while(data[i]); //If input '0' as data, escape the loop
}

double average(double x[NUM]){
  int i;
  double sum = 0;

  for(i = 0; i < NUM; i++){
    sum += x[i];
  }

  return sum / NUM;
}
*/
