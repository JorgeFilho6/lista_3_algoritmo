#include <stdio.h>
//Gerar 20 n�meros entre 1000 a 1999 que divididos por 11 d�o um resto igual a 5.
int main(void) {
  int i, j, k = 0;
  for(i = 1000; i < 2000; i++){
    j = i%11;
    if(j==5){
      k++;
      printf("%d/11 tem resto 5\n", i);
    }
    if(k==20){
      break;
    }
  }
  return 0;
}
