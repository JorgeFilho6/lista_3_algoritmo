#include <stdio.h>
#include <string.h>
//Prepare um programa que leia uma frase do teclado e informe quantas caracteres e palavras foram digitadas. 
int main(void) {
  char texto[1000];
  int a, i, b = 0, cont = 0, palavra = 0;
  printf("Digite algo: ");
  fgets(texto, 1000, stdin);
  a = strlen(texto);
  for(i = 0; i < strlen(texto)+1; i++){
    b = texto[i];
    if(b != 32){
      cont++;
    }
    if(b == 32){
      palavra++;
    }
  }
  printf("Foram digitadas %d palavras e %d caracteres.", palavra+1, cont-2);
  return 0;
}
