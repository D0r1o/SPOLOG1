#include <stdio.h>

int main() {
    int vetor [5];
    int i;
    // O laço vai de 0 até 4 (Tamanho do vetor - 1)
    for (i = 0; i < 5; i++) {
    printf("Digite o valor de %d: ", (i + 1));
    // O (i + 1) é só para a tela mostrar "Aluno 1" em vez
    scanf("%d", &vetor[i]);
    }

    printf("\n--- Valores ---\n");
    for (i = 4; i >= 0; i--) {
    printf("valor %d: %d\n", (i + 1), vetor[i]);

    }
    
 
    return 0;
}