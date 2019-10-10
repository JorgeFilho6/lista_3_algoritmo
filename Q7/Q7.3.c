#include <stdio.h>
//Imprimir a tabuada do número 4.
int main(){
  int i, num, mult;
  num = 4, mult = 0;

  for(i = 1; i <= 10; i++){
    mult = num * i;
    printf("%d x %2d = %2d\n", num, i, mult);
  }

  return 0;
}
