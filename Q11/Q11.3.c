#include <stdio.h>
//Ler um n�mero e escreva se ele "� primo" ou "n�o � primo".
int main(void) {
  int num = 0, prim = 0, cont = 1, i = 1;
  printf("Digite um numero: ");
  scanf("%d", &num);
  while(i != num){
    i++;
    prim = num%i;
    if(prim == 0){
      cont ++;
    }
  }
  if(cont > 2){
    printf("%d nao e primo.", num);
  }
  if(cont == 2){
    printf("%d e primo.", num);
  }
  return 0;
}
