#include <stdio.h>
//Calcular os divisores de um nº qualquer.
int main(void) {
  int i, num = 0, div = 0;
  printf("Digite um numero: ");
  scanf("%d", &num);
  for(i = 1; i <= num; i++){
    if(num % i == 0){
      div = i;
      printf("O numero %d e divisor de %d.\n", div, num);
    }
  }
  return 0;
}
