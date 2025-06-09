#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct no *prox;
};

void push(struct No **topo, int valor){
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo -> valor = valor;
    novo -> prox = *topo;
    *topo = novo;
}

int pop(struct No **topo){
    if(*topo == NULL){
        printf("Pilha vazia!\n");
        return -1;
    }
    struct No *temp = *topo;
    int valor = temp -> valor;
    *topo = temp -> prox;
    free(temp);
    return valor;
}

int main(){
    struct No *pilha = NULL;

    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    printf("POP: %d\n", pop(&pilha));

}