#include <stdio.h>

int main() {
    int matriz [10]= {1,2,3,4,5,6,7,8,9,10};
    int i;
    

    printf("\n--- Valores ---\n");
    for (i = 1; i <= 9; i +=2) {
    printf("valor %d: %d\n", (i + 1), matriz[i]);
    };

    return 0;
}