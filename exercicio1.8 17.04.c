#include <stdio.h>

int main() {
    int vetor[10] = {1, 2, 3, 2, 5, 3, 2, 1, 3, 2};
    int A = 2;
    int B = 3;
    int C = 1;
    int igual_A = 0;
    int igual_B = 0;
    int igual_C = 0;
    int i;

    for (i = 0; i < 10; i++) {
        if (vetor[i] == A) igual_A++;}

    for (i = 0; i < 10; i++) {
        if (vetor[i] == B) igual_B++;}

    for (i = 0; i < 10; i++) {
        if (vetor[i] == C) igual_C++;}

    printf("O numero %d apareceu %d \n", A, igual_A);
    printf("O numero %d apareceu %d \n", B, igual_B);
    printf("O numero %d apareceu %d \n", C, igual_C);

    return 0;
}