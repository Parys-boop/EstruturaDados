#include <stdio.h>
#define TAMANHO 10

int main(){
    int vetor[TAMANHO];
    int n = 0;

    vetor[n++] = 10;
    vetor[n++] = 30;
    vetor[n++] = 20;

    printf("ELEMENTOS DO VETOR:\n");
    for(int i = 0; i < n; i++){
        printf("Posicao %d é %d\n", i, vetor[i]);
    }

    return 0;
}