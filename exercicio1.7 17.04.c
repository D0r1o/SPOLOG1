#include <stdio.h>

int main() {
    int Matriz_A[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 18, 19, 20,21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int i;
    int menor;
    int maior; 
    int maioresMedia = 0;
    float soma = 0;
    float media;

    menor = Matriz_A[0];
    maior = Matriz_A[0];

    
    for (i = 0; i < 30; i++) {
        if (Matriz_A[i] < menor) menor = Matriz_A[i];}


    for (i = 0; i < 30; i++) {    
        if (Matriz_A[i] > maior) maior = Matriz_A[i];}


    for (i = 0; i < 30; i++) {
        soma += Matriz_A[i];}

    media = soma / 30;

    printf("--- Numeros pares ---\n");
    for (i = 0; i < 30; i++) {
        if (Matriz_A[i] % 2 == 0)
            printf("%d\n", Matriz_A[i]);
    }

    printf("\n--- Menor e Maior ---\n");
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    for (i = 0; i < 30; i++) {
        if (Matriz_A[i] > media)
            maioresMedia++;
    }

    printf("\n--- Maiores que a media ---\n");
    printf("Media: %.2f\n", media);
    printf("Quantidade acima da media: %d\n", maioresMedia);

    return 0;
}

