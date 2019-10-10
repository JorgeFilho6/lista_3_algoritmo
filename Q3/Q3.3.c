#include <stdio.h>
//Calcular e imprimir os números divisíveis por 4 menores que 100.
int main(void) {
  int i, div = 0;
  for(i = 0; i <= 100; i++){
    if(i % 4 == 0){
      div = i;
      if(div == 100){
        printf("O numero %d e divisivel por 4.", div);
        break;}
      printf("O numero %3d e divisivel por 4 e e menor que 100.\n", div);
    }
  }
  return 0;
}
