#include <stdio.h>

int main() {
    int matriz_a [20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i;
    int matriz_b [20];
    int soma = 0;
    int j;
    for(i=0; i < 20;i++){
    matriz_b[i] = matriz_a[i];
    }
    for(j=0; j<10; j++){
    soma=matriz_b[j]+soma;
    
    printf("valor: %d \n", soma);
}
}