#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int grafico(){
  char pontos[40];
  int i, tamanho, j;
  printf("insira os dados do grafico: ");
  fgets(pontos, 40, stdin);        
  tamanho = strlen(pontos)-1;  
  for(i=0; i<=tamanho; i++){
    if(pontos[i]>=48 && pontos[i]<=57){
      int k = pontos[i] - 48;
      for(j=0; j<k; j++){
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
int main(){ 
   grafico();
   return 0;
}
