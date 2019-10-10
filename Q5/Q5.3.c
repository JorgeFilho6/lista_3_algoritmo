#include <stdio.h>
//Para calcular o fatorial de um número qualquer.
int main(void) {
  int i, num = 0, fat = 0, fat1 = 0;
  printf("Vamos calcular um fatorial. Digite um numero: ");
  scanf("%d", &num);
  fat1 = num-1;
  printf("%d! = %d x %d", num, num, fat1);
  fat = num*fat1;
  i = num;
  while(i != 1){
    fat1 -= 1;
    fat *= fat1;
    printf(" x %d", fat1);
    i--;
    if(fat1 == 1){
      printf(" = %d", fat);
      break;
    }
  }  
  return 0;
}
