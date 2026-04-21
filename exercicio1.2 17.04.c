#include <stdio.h>

int main() {
    int matriz [8]= {1,2,3,4,5,6,7,8};
    int i;
    int matriz_b [10];

    matriz_b[0] = matriz[0]*3;
    matriz_b[1] = matriz[1]*3;
    matriz_b[2] = matriz[2]*3;
    matriz_b[3] = matriz[3]*3;
    matriz_b[4] = matriz[4]*3;
    matriz_b[5] = matriz[5]*3;
    matriz_b[6] = matriz[6]*3;
    matriz_b[7] = matriz[7]*3;

    printf("\n--- Valores ---\n");
    for (i = 0; i <= 8; i++) {
    printf("valor %d: %d\n", (i + 1), matriz_b[i]);
    }
    
 
    return 0;
}