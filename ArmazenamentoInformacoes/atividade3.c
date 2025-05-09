#include <stdio.h>

struct Produto{
    char nome[40]; //string com struct, sempre tem que definir o tamanho
    float preco;
};

int main(){
    struct Produto p[3];
    struct Produto *ponteiro;
    ponteiro = p;

    int i;

    //NÃO SEI SE ESTA COMO PONTEIRO, mas não consegui fazer o codigo ultilizando "->"

    for(i = 0; i < 3; i++){
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", &ponteiro[i].nome);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &ponteiro[i].preco);
    }

    //ACESSANDO OS DADOS DO 3° PRODUTO
    printf("PRODUTO 3, NOME: %s, PREÇO: %g", ponteiro[2].nome, ponteiro[2].preco);
    return 0;
}