#include <stdio.h>

int main() {
    int matriz [15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i;
    

    printf("\n--- Valores ---\n");
    for (i = 0;i < 15; i++) {
        if(matriz[i]>=10){
    printf("valor %d: %d\n", (i + 1), matriz[i]);
    };
    }
    return 0;
}