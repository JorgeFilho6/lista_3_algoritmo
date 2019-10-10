#include <stdio.h>
#include <string.h>

int main(){
  int n, j=0, i, linha, coluna;
  char cop[40], vertical[40];
  for(i=0; i<40; i++){
    cop[i] = 0;
    vertical[i] = 0;
  }
  printf("Insira os dados para desenhar o grafico: ");
  fgets(cop, 40, stdin);
  for(i=0; i<strlen(cop); i++){
		if(cop[i]>=48 && cop[i]<=57){
			vertical[j] = cop[i];
			j++;
		}
	}	
  n = strlen(vertical);
  int vetor[n];
  for(i=0; i<n; i++){
    vetor[i] = vertical[i]-48;
  }
  int maiorNumero = 0;
  for(i=0; i<n; i++){
    if(vetor[i] > maiorNumero){
      maiorNumero = vetor[i];
    }
  }
  for (linha = maiorNumero; linha > 0; linha--){
    for (coluna=0; coluna < n; coluna++){
      if (vetor[coluna] >= linha){
        printf("*");  
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
