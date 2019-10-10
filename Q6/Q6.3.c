#include <stdio.h>
//Imprimir o menor inteiro positivo x cujo quadrado é superior a um valor L dado.
int main(void) {
  int a, sq, sq2;
  printf("Digite um numero qualquer: ");
  scanf("%d", &a);
for(sq = 0; sq < a; sq++){
  sq2 = sq;
  sq2 = sq2*sq2;
  if(sq2 > a){
    printf("O valor %d*%d e maior que o valor dado (%d)", sq, sq, a);
    break;
  }
}
  return 0;
}
