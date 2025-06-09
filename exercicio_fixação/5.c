#include <stdio.h>
#include <stdlib.h>

struct No { //Define no na lista
    int valor;      //valor armazenado
    struct No *prox; //Ponteiro para o proximo nó
};

void inserirNoInicio(struct No **head, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo -> valor = valor;
    novo -> prox = *head;
    *head = novo;
}

void imprimirLista(struct No *head){
    printf("Lista: ");
    while(head != NULL){
        printf("%d -> ", head -> valor);
        head = head -> prox;
    }

    printf("NULL \n");
}
int main(){
    struct No *lista = NULL;
    inserirNoInicio(&lista, 30);
    inserirNoInicio(&lista, 20);
    inserirNoInicio(&lista, 10);

    imprimirLista(lista);

    return 0;
}