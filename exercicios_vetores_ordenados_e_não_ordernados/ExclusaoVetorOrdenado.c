#include <stdio.h>
#define TAMANHO 10

int main(){
    int vetor[TAMANHO] = {10, 20, 25, 30, 50};
    int n = 5;
    int valor = 20;
    int i, j;
    int encontrado = -1;

    for(i = 0; i < n; i++){
        printf("Comparando com posicao %d: %d\n", i, vetor[i]);
        if(vetor[i] == valor){
            encontrado = i;
            printf("valor %d, encontrado na posicao %d\n", valor, i);
            break;
        }else if(vetor[i] > valor){
            printf("Valor não encontrado (interrompido pela ordenacao).\n");
            break;
        }
    }

    if(encontrado != -1){
        for(j = encontrado; j < n - 1; j++){
            vetor[j] = vetor[j + 1];
        }
        n++;
        printf("valor %d revomido do vetor.\n", valor);
    }else{
        printf("o valor %d não encotrado no vetor\n", valor);
    }
    printf("vetor após a exclusao:");
    for(i = 0; i < n; i++){
        printf("Posicao %d, valor: %d\n", i, vetor[i]);
    }
    printf("\n");
    return 0;
}