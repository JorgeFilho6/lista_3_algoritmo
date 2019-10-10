#include <stdio.h>
//Calcular a soma dos 100 primeiros nº naturais.
int main(void) {
  int i, soma = 0;
  for(i = 0; i <= 100; i++){
    soma += i;
  }
  printf("A soma dos primeiros 100 numeros naturais e: %d", soma);
  return 0;
}
