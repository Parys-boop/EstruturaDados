#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura para representar uma página
struct Pagina{
    char url[100];
    struct Pagina *prox;
};

//Função para acessar uma nova página (push)
void acessarPagina(struct Pagina **topo, const char *endereco){
    struct Pagina *nova = (struct Pagina *)malloc(sizeof(struct Pagina));
    strcpy(nova -> url, endereco);
    nova -> prox = *topo;
    *topo = nova;
}

//Função para voltar a página anterior (pop)

void voltarPagina(struct Pagina **topo){
    if(*topo == NULL){
        printf("Nunhuma página para voltar\n");
        return;
    }
    struct Pagina *temp = *topo;
    printf("Voltando da página: %s\n", temp -> url);
    *topo = temp -> prox;
    free(temp);
}
//Função para monstrar página atual
void mostrarPaginaAtual(struct Pagina *topo){
    if(topo == NULL){
        printf("Nenhuma página aberta\n");
    }else {
        printf("Pagina atual %s\n", topo -> url);
    }
}

//Função para mostrar o historico (todos os nós da pilha)
void mostrarHistorico (struct Pagina *topo) {
    if (topo == NULL){
        printf("Historico vazio. \n");
        return;
    }
    printf("Historico de páginas visitas: \n");
    while(topo != NULL){
        printf(" - %s\n", topo -> url);
        topo = topo -> prox;
    }
}
//Função principal com o interativo
int main(){
    struct Pagina *pilha = NULL; //pilha de pagina
    int opcao;
    char url[100];
    do{
        printf("\n===============MENU DO NAVEGADOS ========\n");
        printf("1. Acessar nova página\n");
        printf("2. Voltar página anterior\n");
        printf("3. Ver página atual\n");
        printf("4. Mostrar historico\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        getchar(); //Limpa o '\n' Deixado pelo scanft
        switch (opcao){
            case 1: 
                printf("Digite a URL da nova página: ");
                fgets(url, sizeof(url), stdin);
                url[strcspn(url, "\n")] = '\0'; //remove o "\n " do final
                acessarPagina (&pilha, url);
                break;
            case 2:
                voltarPagina (&pilha);
                break;
            case 3:
                mostrarPaginaAtual (pilha);
                break;
            case 4:
                mostrarHistorico (pilha);
                break;
            case 0:
                printf("Saindo...");
                break;
            default:
            printf("Opção invalida");
        }
    } while (opcao != 0);
    //LIBERA MEMORIA RESTANTE (pilha completa)
    while (pilha != NULL){
        voltarPagina(&pilha);
    }
    return 0;
}