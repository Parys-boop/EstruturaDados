#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;  //Valor armazenado no nó
    struct No *proximo; //ponteiro para o proximo nó
} No;
//Função para inserir um novo nó no inicio da lista
void inserir_inicio(No **inicio, int valor){    
    No *novo = malloc(sizeof(No));      //Aloca memória para o novo nó
    novo ->valor = valor;               //Define o valor do novo nó
    novo ->proximo = *inicio;           //Faz o novo nó apontar para o antigo primeiro nó
    *inicio = novo;                     //Atualizar o inicio da lista
}
    //Função para imprimir a lista
void imprimir(No *inicio){
    No *atual = inicio;                 //começa pelo primeiro nó
    printf("Lista: ");
    while(atual != NULL){               //enquanto houver nó
        printf("%d -> ", atual -> valor);  //imprime o valor
        atual = atual->proximo;            //avança para o próximo nó
    }
    printf("NULL\n");                   //FIM DA LISTA
}

int main(){
    No *lista = NULL;                   //Inicializa a lista

    inserir_inicio(&lista, 30);
    inserir_inicio(&lista, 20);
    inserir_inicio(&lista, 10);
    imprimir(lista);                    //Imprime a lista

    return 0;
}