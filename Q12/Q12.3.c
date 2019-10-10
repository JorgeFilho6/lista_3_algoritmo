#include <stdio.h>
//Calcular a diferença entre o 6o e o 12o números Primos.
int primo(){ 
  int i, x = 0, primo=0, a, b;
  int div = 0;
  while(x<=100){
    div = 0;
    for (i = 1; i <= x; i++) {
      if (x % i == 0) {
        div++;
      }
    }
    if (div == 2){
      primo++;
      if(primo==6){
        a=x;
      }
      if(primo==12){
        b=x;
      }
    }
    x++;
  }
  return (b-a);
}
int main(){
  int num = primo();
  printf("Diferenca: %d", num);
}
