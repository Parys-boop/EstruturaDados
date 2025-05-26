#include <stdio.h>
#include <stdlib.h>

//Estrutura de nó da lista
struct No{
    int valor;                  //Valor armazenado
    struct No *anterior;        //Ponteiro para nó anterior
    struct No *proximo;         //Ponteiro para o proximo nó
};

//insirir elemento no inicio da lista
void inserirInicio(struct No **incio, struct No **fim, int valor){
    struct No *novo = (struct No *)malloc(sizeof(struct No));
    novo -> valor = valor;
    novo -> anterior = NULL;
    novo -> proximo = *incio;

    if(*incio !=NULL){
        (*incio) -> anterior = novo;
    } else {
        *fim = novo; //se lista vazia, novo é tambem o fim
    }

    *incio = novo;
    printf("Inserido %d no inicio \n", valor);
}

//Inserir elemento no fim da lista
void inserirFim(struct No **inicio, struct No **fim, int valor){
    struct No *novo = (struct No *)malloc(sizeof(struct No));
    novo -> valor = valor;
    novo -> proximo = NULL;
    novo -> anterior = *fim;

    if(*fim != NULL){
        (*fim) -> proximo = novo;
    } else {
        *inicio = novo;     //Se lista é vazio, novo tambem é o inicio
    }

    *fim = novo;
    printf("Inserir %d no fim \n", valor);
}

//Remover elemento do inicio da lista
void removerIncio(struct No **inicio, struct No **fim){
    if(*inicio == NULL){
        printf("Lista vazia. Nada para remover \n");
        return;
    }

    struct No *temp = *inicio;
    printf("Removendo %d do inicio.\n", temp ->valor);

    *inicio = temp -> proximo;

    if(*inicio != NULL){
        (*inicio) -> anterior = NULL;
    } else {
        *fim = NULL;        //<----LISTA FICOU VAZIA
    }

    free(temp);
}

//Remover elemento do fim da lista
void removerFim(struct No **incio, struct No **fim){
    if(*fim == NULL){
        printf("Lista vazia. Nada para remover.\n");
        return;
    }

    struct No *temp = *fim;
    printf("Removendo %d do fim.\n", temp->valor);

    *fim = temp->anterior;

    if(*fim != NULL){
        (*fim) -> proximo = NULL;
    } else {
        *incio = NULL;            //LISTA FICOU VAZIA 
    }

    free(temp);
}

//Mostrar lista do fim ao inicio
void mostrarfimAoIncio(struct No *fim){
    if(fim == NULL){
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista do fim ao inicio: ");
    while(fim != NULL){
        printf("%d", fim -> valor);
        fim = fim -> anterior;
    }
    printf("\n");
}

//Função principal com o menu
int main(){
    struct No *incio = NULL;
    struct No *fim = NULL;
    int opcao, valor;

    do{
        printf("\n==========XD===== - Menu  LISTA DUPLAMENTE ENCAMINHADA ==============\n");
        printf("1. inserir no incio\n");
        printf("2. inserir no fim\n");
        printf("3. Remover no inicio\n");
        printf("4. Remover do fim\n");
        printf("5. Mostrar do inicio ao fim\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", opcao);
    }
}