#include <stdio.h>
#include <stdlib.h>

//Define a estrutura do nó da pilha
struct No {
    int valor;
    struct No *prox;
};
void push (struct No **topo, int valor){
    struct No *novo = (struct No*)malloc(sizeof(struct No)); //Aloca novo nó
    novo -> valor = valor;          //atribui o valor
    novo -> prox = *topo;           //faz novo nó apontar para o antigo nó
    *topo = novo;
}

//Função pop: remove o topo da pilha e retorna seu valor
int pop (struct No **topo){
    if (*topo == NULL){
        printf("Pilha vazia!\n");
        return -1; //valor que indica erro
    }
    struct No *temp = *topo;        //Armazena o nó atual
    int valor = temp -> valor;      //Pega o valor antes de remover
    *topo = temp -> prox;           //Atualiza o topo para o proximo nó
    free(temp);                     //libera a memória do nó antigo
    return valor;                   //Retorna o valor removido
}

//função peek: Retorna o valor do topo da pilha sem remover
int peek(struct No *topo){
    if (topo == NULL) {
        printf("Pilha vazia \n");
        return -1; //valor sinalizador
    }
    return topo -> valor;        //retorna o valor do topo
}

//Função para imprimir a pilha (visualização)
void imprimirPilha(struct No *topo){
    printf("Topo da pilha \n");
    while(topo != NULL){
        printf(" %d\n", topo -> valor);
        topo = topo -> prox;
    }
    printf("NULL\n");
}

int main(){
    struct No *pilha = NULL; //Pilha vazia

    //inserções
    push(&pilha, 10);
    push(&pilha , 20);
    push(&pilha, 30);

    imprimirPilha(pilha); //Mostrar pilha

    //Consultar o topo sem remover
    printf("Valor no topo (peek): %d\n", peek(pilha));

    //Remove o opo
    int valorRemovido = pop(&pilha);
    printf("Valor removido (pop): %d\n", valorRemovido);

    //Consultar novamente após remoção
    printf("Novo topo (peek): %d\n", peek(pilha));

    imprimirPilha(pilha); //mostra a pilha final
    return 0;
}