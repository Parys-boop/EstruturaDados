#include <stdio.h>

int main(){
    int vetor[5];
    int n = 0;

    vetor[n++] = 10;
    vetor[n++] = 40;
    vetor[n++] = 20;

    printf("Vetor não ordenado(Array estatico)\n");

    for(int i = 0; i < n; i++){
        printf("A posicao do vetor: %d, valor: %d\n", i, vetor[i]);
    }

    return 0;
}