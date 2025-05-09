#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main(){
    struct Pessoa pessoa[3]; //vetor com 3 possições para armazenar daddos de 3 pessoas
    int i;

    for(i = 0; i < 3; i++){
        printf("\n--------Pessoa %d ------------\n", i + 1);
        printf("digite o nome: ");
        scanf("%[^\n]", pessoa[i].nome);  //le o nome com espaçoes e armazena no campo 'nome' da struct
        printf("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);
        printf("Digite a altura (em metros): ");
        scanf("%f", &pessoa[i].altura);
    }

    printf("\n\n------------LISTA DE PESSOAS -------------\n");
    for(i = 0; i < 3; i++){
        printf("\nPessoa %d: \n", i + 1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %d", pessoa[i].idade);
        printf("Altura: %.2f metros \n", pessoa[i].altura);
    }

    return 0;
}