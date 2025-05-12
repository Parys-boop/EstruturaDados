#include <stdio.h>
#include <stdlib.h>
//Definindo a estrutura do nó da lista
struct No{
    int valor;          //valor armazenado no nó
    struct No *prox;    //Ponteiro para o próximo nó
};
//Função para inserir um novo nó no incio da lista
struct No* inserirNoInicio(struct No *head, int novoValor){
    struct No *novoNo = (struct No*) malloc (sizeof(struct No));    //Aloca memorio para o novo nó
    novoNo -> valor = novoValor;    //atribui o valor desejado ao novo nó
    novoNo -> prox = head;          //faz o ponteiro "prox" do novo nó apontar para o antigo primeiro nó (head)
    return novoNo;                  //Retorna o novo nó como sendo o novo incio (head) da lista
}
//função para imprimir a lista encadeada
void impromirLista(struct No *head){
    struct No *atual = head;        //cria um ponteiro auxiliar para percorrer a lista
    printf("Lista: ");              
    while (atual != NULL){          //Enquanto não chegar no final (NULL)
        printf("%d -> ", atual -> valor);  //imprime o valor do nó atual
        atual = atual -> prox;      //Avança para o proximo nó
    }
    printf("NULL\n");       //indica o fim da lista
}
int main(){
    struct No *lista = NULL;

    lista = inserirNoInicio(lista, 30);
    lista = inserirNoInicio(lista, 20);
    lista = inserirNoInicio(lista, 10);

    lista = inserirNoInicio(lista, 5);

    impromirLista(lista);
    return 0;
}