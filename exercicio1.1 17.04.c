#include <stdio.h>

int main() {
    int matriz [10];
    int i;
    // O laço vai de 0 até 4 (Tamanho do matriz - 1)
    for (i = 0; i < 10; i++) {
    printf("Digite o valor de %d: ", (i + 1));
    scanf("%d", &matriz[i]);
    }

    printf("\n--- Valores ---\n");
    for (i = 0; i < 10; i++) {
    printf("valor %d: %d\n", (i + 1), matriz[i]);
    }
    
 
    return 0;
}