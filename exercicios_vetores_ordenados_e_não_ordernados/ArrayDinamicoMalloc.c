#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;  //define um vetor APENAS!
    int n = 0; //define quantos valores tera no vetor
    int tamanho = 5; //defini o tamanho do vetor

    vetor = malloc(tamanho * sizeof(int)); //ALOCA O TAMANHO PARA 5 INTEIROS

    vetor[n++] = 15;
    vetor[n++] = 25;
    vetor[n++] = 5;

    printf("Vetor não ordenado (Array dinamico em MALLOC)\n");

    for(int i = 0; i < n; i++){
        printf("Posicao: %d, valor: %d\n", i, vetor[i]);
    }

    free(vetor); //Libera a memória alocada dinamicamente

    return 0;
}