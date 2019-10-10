#include <stdio.h>
#include <string.h>
int main(){
   char texto[1000], reverse[1000];
   int inicio, fim, count = 0;
   printf("Digite algo: ");
   fgets(texto, 1000, stdin);
   fim = strlen(texto) - 1;
   for (inicio = 0; inicio < strlen(texto); inicio++) {
      reverse[inicio] = texto[fim];
      fim--;
   }
   reverse[inicio] = '\0';
   printf("%s\n", reverse);
   return 0;
}
