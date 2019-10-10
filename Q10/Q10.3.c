#include <stdio.h>
//Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo [10,50] e quantos deles estão fora deste intervalo, mostrando estas informações.
int main(void) {
  int num, i, cont1 = 0, cont2 = 0, contf = 0;
  while(contf!= 10){
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num >= 10 && num <= 50){
      cont1+= 1;
      contf+=1;
    }else{
      cont2+= 1;
      contf+=1;
    }
  }
  printf("Voce digitou %d valores dentro do intervalo e %d fora do intervalo.", cont1, cont2);
  return 0;
}
