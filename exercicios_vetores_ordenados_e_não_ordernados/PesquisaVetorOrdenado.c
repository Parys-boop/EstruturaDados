#include <stdio.h>
#define TAMANHO 6

int main(){
    int vetor[TAMANHO] = {5, 10, 15, 20, 30, 50};
    int valor = 20;
    int i;
    int encontrado = -1;

    for(i = 0; i < TAMANHO; i++){
        printf("Comparando com a posição %d: %d\n", i, vetor[i]);

        if(vetor[i] == valor){
            encontrado = i;
            printf("Encontramos o valor na posicao: %d", i);
            break;
        }else if(vetor[i] > valor){
            printf("Parando: valor %d, não está no vetor.\n", valor);
            break;
        }
    }

    if(encontrado == -1){
        printf("Valor não encontrado no vetor");
    }

    return 0;
}