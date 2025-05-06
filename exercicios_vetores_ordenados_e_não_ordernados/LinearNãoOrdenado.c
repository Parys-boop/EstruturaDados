#include <stdio.h>
#define TAMANHO 10

int main(){
    int vetor[TAMANHO] = {10, 30, 20};
    int n = 3;
    int valor = 30;

    int encontrado = -1;

    for(int i = 0; i < n; i++){
        if(vetor[i] == valor){
            encontrado = i;
            break;
        }
    }

    if(encontrado != -1){
        printf("Valor %d encontrado na posicao: %d", valor, encontrado);
    }else{
        printf("Valor não encontrado");
    }

    return 0;
}