#include <stdio.h>

int main(void) {
  int fib1 = 1, fib2 = 1, fib3, cont = 0, num;
  printf("Quantos numeros da sequencia voce quer mostrar? ");
  scanf("%d", &num);
  printf("1, 1, ");
  do{
    fib3 = fib2+fib1;
    fib1 = fib2;
    fib2 = fib3;
    cont++;
    if(cont == num-2){
      printf("%d", fib3);
      break;
      }
    printf("%d, ", fib3);
    
    }
  while(cont < num-2);

  return 0;
}
