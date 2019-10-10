#include <stdio.h>
//Imprimir a tabuada de qualquer número n.
int main(void) {
  int num, i, mult, valor;
  printf("Digite um valor qualquer: ");
  scanf("%d", &num);
  for(i = 1; i <= 10; i++){
    mult = num*i;
    printf("%2d x %2d = %2d\n", num, i, mult);
    if(i == 10){
      printf("Quer continuar? [Sim = 1, Nao = 2]: ");
      scanf("%d", &valor);
      if(valor == 2){
        break;
      }
      if(valor == 1){
        i = 1;
        printf("Digite outro numero: ");
        scanf("%d", &num);
      }
    }
  }
  return 0;
}
