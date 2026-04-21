#include <stdio.h>

int main() {
    int matriz_a [10]= {1,2,3,4,5,6,7,8,9,10};
    int i;
    int matriz_b [20];

for(i=0;i<10;i++){

    matriz_b[i] = matriz_a[9-i];

    printf("valor: %d \n", matriz_b[i]);
}

}