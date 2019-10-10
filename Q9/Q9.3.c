#include <stdio.h>
//Calcular e mostrar a média aritmética dos números pares compreendidos entre 13 e 73.
int main(void) {
  int soma = 0, media = 0, i, cont = 0;
  for(i = 13; i <= 73; i++){
    if(i%2 == 0){
      soma += i;
      cont += 1;
    }
  }
  media = soma/cont;
  printf("A media entre os numeros pares entre 13 e 73 e igual a %d.", media);
  return 0;
}
