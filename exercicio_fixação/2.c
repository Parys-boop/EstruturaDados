#include <stdio.h>
#include <stdlib.h>

int maiorValor (int vetor[], int tamanho){
    int maior = vetor[0];
    for(int i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int vetor[6] = {10, 25, 7, 30, 15, 8};

    int resultado = maiorValor(vetor, 6);
    printf("Maior valor: %d\n", resultado);

    return 0;
}