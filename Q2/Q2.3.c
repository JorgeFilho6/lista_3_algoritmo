#include <stdio.h>
//Imprimir os múltiplos de 7 menores que 200.
int main(void) {
  int i, mult = 0;
  for(i = 0; i <= 200; i++){
    if(i % 7 == 0){
      mult = i;
      printf("O numero %3d e multiplo de 7.\n", mult);
    }
  }

  return 0;
}
