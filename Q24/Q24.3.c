#include <stdio.h>
#include <string.h>
//Prepare uma função que receba um literal em um array e o rearrange de trás para frente.
char reverse(char texto[100]){
   char a[100], reverse[1000];
   int inicio, fim, count = 0;
   fim = strlen(texto) - 1;
   for (inicio = 0; inicio < strlen(texto); inicio++) {
      reverse[inicio] = texto[fim];
      fim--;
   }
   reverse[inicio] = '\0';
   printf("%s", reverse);
   return 0;
}
int main(void) {
  char texto[100];
  printf("Digite algo: ");
  fgets(texto, 1000, stdin);
  puts(texto);
  reverse(texto);
  return 0;
}
