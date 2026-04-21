#include <stdio.h>

int main() {
    float notas[5];
    int i;
    // O laço vai de 0 até 4 (Tamanho do vetor - 1)
    for (i = 0; i < 5; i++) {
    printf("Digite a nota do aluno %d: ", (i + 1));
    // O (i + 1) é só para a tela mostrar "Aluno 1" em vez
    scanf("%f", &notas[i]);
    }

    printf("\n--- BOLETIM ---\n");
    for (i = 0; i < 5; i++) {
    printf("Nota %d: %.2f\n", (i + 1), notas[i]);

    }
    
 
    return 0;
}