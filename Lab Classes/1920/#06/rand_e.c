#include <stdio.h>
#include <stdlib.h>

int main(){
  for(int i=1; i<=100; i++){
    double val = (double)rand() / ((double)RAND_MAX);
    printf("%dº número: %f\n", i, val);
  }

  return 0;
}
