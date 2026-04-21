#include <stdio.h>

int main(){
    int i;
    int soma = 0; // Acumulador deve iniciar em 0
    for (i = 0; i <= 20; i +=2) {
    printf("Adicionando %d a soma...\n", i);
    soma = soma + i;
    }
    printf("Soma total: %d\n", soma);
    return 0;
   }
