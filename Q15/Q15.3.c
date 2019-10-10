#include <stdio.h>
//Contar quantos caracteres 'a' existem em um texto fornecido pelo usuário. Assuma que o usuário não excederá o limite máximo de 100 caracteres.
int main(void) {
  char texto[100];
  int cont = 0, i, num;
  printf("Digite algo: ");
  fgets(texto, 100, stdin);
  for(i = 0; i < 101; i++){
    num = texto[i];
    if(num == 65 || num == 97){
      cont++;
    }
  }
  printf("Voce digitou %d letras a.", cont);
  return 0;
}
